int w = 0, x = 0, y = 0, z = 0;

int Entrada, Salida, Pin;
// DISPLAY
  // A -> 7
  // B -> 8
  // C -> 9
  // D -> 10
  // E -> 11
  // F -> 12
  // G -> 13

void setup() {
  //Pines de entrada para W, X, Y, Z (botones)
  for (Entrada = 2 ; Entrada <= 5 ; Entrada++){
    pinMode(Entrada, INPUT); 
  }
  //Pines de salida (7 pines)
  for (Salida = 7 ; Salida <= 13 ; Salida++){
    pinMode(Salida, OUTPUT); 
  }
  
}

void loop() {

  w = digitalRead(2);
  x = digitalRead(3);
  y = digitalRead(4);
  z = digitalRead(5);
  //CERO
  if ((!z && !y && !x && !w)) {
    Cero();
  }
  // UNO
  if ((!z && !y && !x && w)) {
    Uno();
  }
  // DOS
  if ((!z && !y && x && !w)) {
    Dos();
  }
  // TRES
  if ((!z && !y && x && w)) {
    Tres();
  }
  // CUATRO
  if ((!z && y && !x && !w)) {
    Cuatro();
  }
  // CINCO
  if ((!z && y && !x && w)) {
    Cinco();
  }
  // SEIS
  if ((!z && y && x && !w)) {
    Seis();
  }
  // SIETE
  if ((!z && y && x && w)) {
    Siete();
  }
  // OCHO
  if ((z && !y && !x && !w)) {
    Ocho();
  }
  // NUEVE
  if ((z && !y && !x && w)) {
    Nueve();
  }

  // A
  if ((z && !y && x && !w)) {
    A();
  }
  // B
  if ((z && !y && x && w)) {
    B();
  }
  // C
  if ((z && y && !x && !w)) {
    C();
  }
  // D
  if ((z && y && !x && w)) {
    D();
  }
  // E
  if ((z && y && x && !w)) {
    E();
  }
  // F
  if ((z && y && x && w)) {
    F();
  }
  
  // PARA QUE LOS LED VUELVAN A SU ESTADO OFF
  for (Pin = 14 ; Pin >= 8 ; Pin--){
    digitalWrite(Pin, LOW);
  }

}
//   Funciones
Cero(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
}

Uno(){
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
}

Dos(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(13, HIGH); //G
  OUTPUT(11, HIGH); //E
  OUTPUT(10, HIGH); //D
}

Tres(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(13, HIGH); //G
}

Cuatro(){
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

Cinco(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

Seis(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

Siete(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
}

Ocho(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

Nueve(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

A(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

B(){
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

C(){
  OUTPUT(7, HIGH); //A
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
}

D(){
  OUTPUT(8, HIGH); //B
  OUTPUT(9, HIGH); //C
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(13, HIGH); //G
}

E(){
  OUTPUT(7, HIGH); //A 
  OUTPUT(10, HIGH); //D
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}

F(){
  OUTPUT(7, HIGH); //A
  OUTPUT(11, HIGH); //E
  OUTPUT(12, HIGH); //F
  OUTPUT(13, HIGH); //G
}
