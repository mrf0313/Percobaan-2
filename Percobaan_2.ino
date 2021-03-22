int a = 2;
int b =3; 
int c= 4; 
int d=5; 
int e=6; 
int f=7; 
int g=8; 
int h=9; 

void setup() {
  for (byte k = 6; k < 10; k++) {
  pinMode(k,OUTPUT);
      }
  }

void loop() {
// Angka 1
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
delay(500);


// angka 3
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);

// Dash
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);

// Angka 0
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);
delay(500);

// Angka 3
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);

// Dash
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);

// angka 2
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,1);
delay(300);

// Angka 0
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);
delay(500);

// Angka 0
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);
delay(500);

// angka 2
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,1);
delay(500);

// Jeda
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
delay(3050);
}
