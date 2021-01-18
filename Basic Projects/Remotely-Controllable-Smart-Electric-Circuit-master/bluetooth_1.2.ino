int IN1 = 2;
int IN2 = 4;
int ENA = 9;
void setup() 
{
  
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT); 
 pinMode(2,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(4,OUTPUT);

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
      
    digitalWrite(8,HIGH);
    
    break;
    

    case 54:
    
    digitalWrite(8,LOW);
    
    break;


    case 55:

    digitalWrite (IN1,LOW);
    digitalWrite (IN2,HIGH);
    analogWrite (ENA,255);
    break;

    case 56:

    digitalWrite (IN1,LOW);
    digitalWrite (IN2,LOW);
    analogWrite (ENA,0);
    break;
    
    
    }
           }
                 }
