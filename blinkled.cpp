// C++ code
//
const int led[4]={2,3,4,5};
void setup()
{
  for(int i=0;i<4;i++){
  pinMode(led[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  for(int num=0;num<16;num++){
    for(int bit=0;bit<4;bit++){
      if(num&(1<<bit)){
      digitalWrite(led[bit],HIGH);
      }
      else
         digitalWrite(led[bit],LOW);
        
    }
    Serial.println(num);
  delay(1000);
  }
  
  
}