int led1 = D6;


void setup() {
    
	pinMode(D6, OUTPUT);
	Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handler);
}

void loop() {
    
}

void handler(const char *event, const char *data)
{
    //found something
    Particle.publish("Debug", String(data));

    
    if(String(data) == "wave")
    {
        wave();
    }
    else if(String(data) == "pat")
    {
        pat();
    }

}

void wave()
{
    digitalWrite(led1, HIGH);
	delay(100);
	digitalWrite(led1, LOW);
	delay(100);
	digitalWrite(led1, HIGH);
	delay(100);
	digitalWrite(led1, LOW);
	delay(100);
	digitalWrite(led1, HIGH);
	delay(100);
	digitalWrite(led1, LOW);
	delay(100);
}

void pat()
{
    digitalWrite(led1, HIGH);
	delay(2000);
	digitalWrite(led1, LOW);
}