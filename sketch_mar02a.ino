#include <virtuabotixRTC.h>

int relay = 9;
virtuabotixRTC clocks(6, 7, 8);
int offTime = 7;

void setup()
{
    pinMode(relay, OUTPUT);
}

void loop()
{
    clocks.updateTime();
    
    if (clocks.hours <= offTime) {
        digitalWrite(relay, LOW);
    } else {
        digitalWrite(relay, HIGH);
    }

    delay(5000);
}
