#include "WiFi.h"
#include "ESPAsyncWebServer.h"
#include <Adafruit_Sensor.h>


//const char* ssid = "Kyou Mi 9";
//const char* password =  "ajok17ab";

const char* ssid = "iPhone de Amandhi";
const char* password =  "cie!N0ir";

//const char* ssid = "iPhone de ";
//const char* password =  "12345678";



int fsrPin1 = 4;     // the FSR and 10K pulldown are connected to a0
int fsrReading1;
String output; 
AsyncWebServer server(80);


 

String readforcesensor(){
  fsrReading1 = analogRead(fsrPin1);  
 
  Serial.print("Analog reading sensor 1 = ");
 Serial.print(fsrReading1);

   if (fsrReading1 > 1) {
    
   output = "good posture ";
   Serial.println(output);
    //return String(output);
  }else  { output = " no pressure ";
  Serial.println(output);
    //return String(output);
  }
  
  }
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html>
<head>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.7.2/css/all.css" integrity="sha384-fnmOCqbTlWIlj8LyTjo7mOUStjsKC4pOpQbqyi7RrhN7udi9RwhKkMHpvLbHG9Sr" crossorigin="anonymous">
  <style>
    html {
     font-family: Arial;
     display: inline-block;
     margin: 0px auto;
     text-align: center;
    }
    h2 { font-size: 2.5rem; }
    p { font-size: 2.0rem; }
    .units { font-size: 1.2rem; }

    .dht-labels{
      font-size: 1.5rem;
      vertical-align:middle;
      padding-bottom: 15px;
     
    }
  </style>
</head>
<body>
  <h2>Connected chair</h2>
  <p>
    <i class="fas fa-thermometer-half" style="color:#059e8a;"></i> 
     
    <span id="message">%posture%</span>
    

    <br> <marquee size="20">N'oubliez pas de vous etirer regulierement</marquee></br>
 
  </p>
  </body>
<script>
setInterval(function ( ) {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("message").innerHTML = this.responseText;
    }
  };
  xhttp.open("GET", "/message", true);
  xhttp.send();
}, 10000 ) ;

</script>
</html>)rawliteral";

// Replaces placeholder with DHT values
String processor(const String& var){
  //Serial.println(var);
  if(var == "posture"){
    return readforcesensor();
  }
  return String();
}
  
void setup(){
  // Serial port for debugging purposes
  Serial.begin(115200);

  //dht.begin();
  
  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }

  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());

  // Route for root / web page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", index_html, processor);
  });
  server.on("/message", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/plain", readforcesensor().c_str());
  });

 server.begin();
}
 
void loop(){
  
}
