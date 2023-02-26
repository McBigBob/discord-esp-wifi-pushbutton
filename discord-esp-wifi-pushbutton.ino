#include <Discord_WebHook.h>
#include <WiFiManager.h>

Discord_Webhook discord;
String DISCORD_WEBHOOK = "webhook link";

void setup() {
  Serial.begin(9600);
  
  WiFiManager wifiManager; // Create a WiFiManager object
  wifiManager.autoConnect("ESP8266_AP"); // Start WiFi manager and create a hotspot if not connected
  
  discord.begin(DISCORD_WEBHOOK);
  discord.send("Hello World"); // Send string
  delay(5 * 60 * 1000);
  ESP.deepSleep(0); // Go to deep sleep after 5min
}

void loop() {

}
