//�����Ϊ��������������Ϊ������
//b0,b1,b2,b3�ֱ�Ϊ������������е�A0,A1,A2,A3
//ENΪʹ�ܶ�
//���Զ˺������˶���ֱ�ӽӵ��˸ߵ�ƽ�ϣ�����Ч
int b0 = 2;
int b1 = 3;
int b2 = 4;
int b3 = 5;
int EN = 6;
char num;

void setup() {
  pinMode(b0, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(EN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
      if(Serial.available())
    {
      num = Serial.read();
      Write(num);
    }
}

void Write(char num)
{
  switch(num){
  	case '0':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,LOW);
    	digitalWrite(b1,LOW);
    	digitalWrite(b2,LOW);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '1':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,HIGH);
    	digitalWrite(b1,LOW);
    	digitalWrite(b2,LOW);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '2':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,LOW);
    	digitalWrite(b1,HIGH);
    	digitalWrite(b2,LOW);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '3':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,HIGH);
    	digitalWrite(b1,HIGH);
    	digitalWrite(b2,LOW);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '4':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,LOW);
    	digitalWrite(b1,LOW);
    	digitalWrite(b2,HIGH);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '5':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,HIGH);
    	digitalWrite(b1,LOW);
    	digitalWrite(b2,HIGH);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '6':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,LOW);
    	digitalWrite(b1,HIGH);
    	digitalWrite(b2,HIGH);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '7':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,HIGH);
    	digitalWrite(b1,HIGH);
    	digitalWrite(b2,HIGH);
    	digitalWrite(b3,LOW);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '8':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,LOW);
    	digitalWrite(b1,LOW);
    	digitalWrite(b2,LOW);
    	digitalWrite(b3,HIGH);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
    case '9':
    	digitalWrite(EN,HIGH);
    	digitalWrite(b0,HIGH);
    	digitalWrite(b1,LOW);
    	digitalWrite(b2,LOW);
    	digitalWrite(b3,HIGH);
    	digitalWrite(EN,LOW);
    	digitalWrite(EN,HIGH);
    	break;
  };
}