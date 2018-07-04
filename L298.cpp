#include "Arduino.h"
#include "L298.h"

L298::L298(int in1, int in2, int in3, int in4)
{
	//set pin mode
	
	//motor 1...
	set(in1);
	set(in2);
	
	//motor 2...
	set(in3);
	set(in4);
	
	
	//set variables
	input1 = in1;
	input2 = in2;
	input3 = in3;
	input4 = in4;
}

void L298::forward_motor1()
{
	high(input1);
	low(input2);
}

void L298::forward_motor2()
{
	high(input3);
	low(input4);
}

void L298::reverse_motor1()
{
	low(input1);
	high(input2);
}

void L298::reverse_motor2()
{
	low(input3);
	high(input4);
}
//............................................

//movements...................................
void L298::off()
{
	low(input1);
	low(input2);
	low(input3);
	low(input4);
}

void L298::forward()
{
	//enable();
	forward_motor1();
	forward_motor2();
}

void L298::reverse()
{
	//enable();
	reverse_motor1();
	reverse_motor2();
}

void L298::right()
{
	//enable();
	forward_motor2();
	reverse_motor1();
}

void L298::left()
{
	//enable();
	forward_motor1();
	reverse_motor2();
}