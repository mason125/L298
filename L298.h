#include "Arduino.h"
#define set(a) pinMode(a, OUTPUT)
#define high(a) digitalWrite(a, HIGH)
#define low(a)  digitalWrite(a, LOW)

class L298
{
	public:
		L298(int in1, int in2, int in3, int in4);
		void forward();
		void reverse();
		void right();
		void left();
		void off();
	
	private:
		
		//motor vars
		int input1;
		int input2;
		int input3;
		int input4;
		
		//individual motor functions
		//void enable();
		void forward_motor1();
		void forward_motor2();
		void reverse_motor1();
		void reverse_motor2();
};