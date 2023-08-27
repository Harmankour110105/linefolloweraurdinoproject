#define ENA 6
#define ENB 5
#define N1 3
#define N2 4
#define N3 7
#define N4 A3
#define Led A5
#define buzzer 2
#define LIR A1
#define RIR A0
#define g A11
int speed = 181; 
void setup() {
    pinMode(ENA, OUTPUT);
    pinMode (ENB, OUTPUT);
    pinMode(N1, OUTPUT);
    pinMode(N2, OUTPUT);
    pinMode(N3, OUTPUT);
    pinMode(N4, OUTPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(Led, OUTPUT);
    pinMode(g,OUTPUT);
    Serial.begin(9600);
    analogWrite (ENA, speed-5);
    analogWrite (ENB, speed);
}
void f(){
    digitalWrite(N1, HIGH);
    digitalWrite(N2, LOW); 
    digitalWrite(N3, HIGH);
    digitalWrite (N4, LOW);
}
void l(){
    digitalWrite(N1, LOW);
    digitalWrite(N2, HIGH);
    digitalWrite(N3, HIGH); 
    digitalWrite(N4, LOW);
}
void r(){
    digitalarite(N1, HIGH);
    digitalWrite(N2, LOW);
    digitalWrite(N3, LOW); 
    digitalWrite(N4, HIGH);
}
void b(){
    digitalWrite(N1, LOW);
    digitalWrite(N2, HIGH); 
    digitalWrite(NS, LOW);
    digitalWrite(N4, HIGH);
}
void loop(){
    digitalWrite(g,HIGH);
    int Li= digitalRead(LIR);
    int Ri= digitalRead(RIR);
    Serial.println(Li); 
    if(Li == 0 && Ri ==0){
        f();
    }
    if(Li == 1 && Ri ==0){
        l();
    }
    if(Li == 0 && Ri ==1){
        r()
    }
    if(Li == 1 && Ri == 1){
        b()
    }
}