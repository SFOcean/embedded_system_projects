int Motor_Pin =9;
int Motor_value=0;
char BluetoothData;
void setup() 
{
  
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT); 
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(Motor_Pin,OUTPUT);
 Serial.begin(9600);
 
}

void loop() 
{
  
  if(Serial.available()>0)
  {
    int data = Serial.read();
    
    Serial.println(data);
    
    switch(data)
    
    {
      case 49:
      
    digitalWrite(13,HIGH);
    
    break;
    

    case 50:
    
    digitalWrite(13,LOW);
    
    break;
    case 51:
      
    digitalWrite(12,HIGH);
    
    break;
    

    case 52:
    
    digitalWrite(12,LOW);
    
    break;

    case 53:
      
    digitalWrite(7,HIGH);
    
    break;
    

    case 54:
    
    digitalWrite(7,LOW);
    
    break;
    
    if(Serial.available()){
  BluetoothData=Serial.read();
    if(BluetoothData=='M')Motor_value=Serial.parseInt();
  }
analogWrite(Motor_Pin,Motor_value);
delay(10); 
    }
           }
                 }
