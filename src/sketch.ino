void setup()
{
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}


void loop()
{
    int goon = millis() / 5000;

    if(goon % 2 == 0)
    {
        analogWrite(9,255);
        digitalWrite(8,LOW);
        digitalWrite(7,HIGH);
    }
    else
    {
        analogWrite(9,0);
        digitalWrite(8,HIGH);
        digitalWrite(7,HIGH);
    }
}
