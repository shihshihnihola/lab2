int led[8]={15,14,13,12,11,10,9,8};

void setup() {
for(int i=0;i<8;i++)
{
  pinMode(led[i],OUTPUT);
  }  

}

void loop() {
//left shift
  for(int j=8;j>=0;j--)
    {      
      digitalWrite(led[j],HIGH);
      delay(300);
      digitalWrite(led[j],LOW);
    }
        //right shift
      for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
      delay(300);
      digitalWrite(led[j],LOW);
    }
    delay(300);
    }
