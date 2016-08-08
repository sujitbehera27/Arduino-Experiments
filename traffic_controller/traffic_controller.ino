int red = 13;
int yellow = 12;
int green = 11;


void setup(){
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop(){
changeLights();
delay(100);
}

void changeLights(){
// green off, yellow for 3 seconds
digitalWrite(green,HIGH);
digitalWrite(yellow,LOW);
delay(50);

// turn off yellow, then turn red on for 5 seconds
digitalWrite(yellow,LOW);
digitalWrite(red,HIGH);
delay(200);

// red and yellow on for 2 seconds (red is already on though)
digitalWrite(yellow,HIGH);
delay(100);

// turn off red and yellow, then turn on green
digitalWrite(yellow,LOW);
digitalWrite(red,LOW);
digitalWrite(green,HIGH);
}

