#include "./wiringPi/wiringPi.h"

int main(){
	//Setup
	wiringPiSetupGpio();
	pinMode(18, OUTPUT);

	//Loop
	int ctrl = 0;
	for(ctrl=0; ctrl < 10; ctrl++){
		digitalWrite(18, HIGH);
		delay(1000);
		digitalWrite(18, LOW);
		delay(1000);
	}

	return 1;
}

