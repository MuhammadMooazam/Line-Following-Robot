int LeftMotorForward = 3; 

int LeftMotorReverse = 2;

int RightMotorForward = 5;

int RightMotorReverse = 4;

int left= A3;

int right= A1;



void setup()

{

pinMode(LeftMotorForward,OUTPUT);

pinMode(RightMotorForward,OUTPUT);

pinMode(LeftMotorReverse,OUTPUT);

pinMode(RightMotorReverse,OUTPUT);

pinMode(left,INPUT);

pinMode(right,INPUT);

analogWrite(LeftMotorForward, 150);

analogWrite(RightMotorForward, 150);

}



void loop()

{

if(analogRead(left)<500 && analogRead(right)<500)

{

analogWrite(LeftMotorForward, 150);

analogWrite(RightMotorForward, 150);

}

else if(analogRead(left)<500 && analogRead(right)>=500)

{

analogWrite(LeftMotorForward, 130);

analogWrite(RightMotorForward, LOW);

}

else if(analogRead(left)>=500 && analogRead(right)<500)

{

analogWrite(LeftMotorForward, LOW);

analogWrite(RightMotorForward, 130);

}

else

{

analogWrite(LeftMotorForward, LOW);

analogWrite(RightMotorForward, LOW);

}

delay(1);

}
