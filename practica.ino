/*Constantes, si es un arduino uno o mega u otro, estas constantes se deben cambiar
  son los pines asignados para prender o apagar filas o columnas
La matriz es de 8x8, se esta usando como si fuera una de 5x5 para reducir el tamaño
*/

#include <TimerOne.h>


//potenciometro
int entrada = A0;

bool estado = false;

//filas
const int f1 = 21;
const int f2 = 20;
const int f3 = 19;
const int f4 = 18;
const int f5 = 17;

//elemento de cada columna
const int c1 = 53;
const int c2 = 51;
const int c3 = 49;
const int c4 = 47;
const int c5 = 45;
//----------------------

int del = 2;

//esta variable se usa para mostrar varias letras, en la funcion loop
//ya que con delay pone problema
int aux = 0;

//se utiliza para tener 3 estados al presionar el boton
int val = 0;

int boton = 7;

int botonDelay = A0;

//se usa para el tiempo en que muestra cada letra
int rango = 100;

//pines para interrupción
const byte interruptPin1 = 2;
const byte interruptPin2 = 3;

void setup() {
  Serial.begin(9600);//para usar el serial
/*
  pinMode(boton,INPUT);
  pinMode(botonDelay,INPUT);
*/
  pinMode(f1,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(f3,OUTPUT);
  pinMode(f4,OUTPUT);
  pinMode(f5,OUTPUT);

  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  pinMode(c4,OUTPUT);
  pinMode(c5,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(interruptPin1), funcion1, RISING);
  attachInterrupt(digitalPinToInterrupt(interruptPin2), funcion3, FALLING);

  Timer1.initialize(10000000);
  Timer1.attachInterrupt(funcion2);
}

void funcion1(){
  Serial.println("Interrupción1");
  //aux>=rango*9 && aux<rango*10
  for(int i = 0;i<6000;i++){
    if(i <= rango ) U();
    else if ( i > rango && i <=rango*2) D();
    else if ( i > rango*2 && i <=rango*3) C();
    else if ( i > rango*3 && i <=rango*4) H();
    else if ( i > rango*4 && i <=rango*5) W();
    else if ( i > rango*5 && i <=rango*6) UNO();
  }
}

void funcion3(){
  Serial.println("Interrupción2");
  //aux>=rango*9 && aux<rango*10
  for(int i = 0;i<6000;i++){
    if(i <= rango ) U();
    else if ( i > rango && i <=rango*2) D();
    else if ( i > rango*2 && i <=rango*3) C();
    else if ( i > rango*3 && i <=rango*4) H();
    else if ( i > rango*4 && i <=rango*5) W();
    else if ( i > rango*5 && i <=rango*6) TRES();
  }
}

void funcion2(){
  Serial.println("Interrupción1");
  //aux>=rango*9 && aux<rango*10
  for(int i = 0;i<6000;i++){
    if(i <= rango ) U();
    else if ( i > rango && i <=rango*2) D();
    else if ( i > rango*2 && i <=rango*3) C();
    else if ( i > rango*3 && i <=rango*4) S();
    else if ( i > rango*4 && i <=rango*5) W();
    else if ( i > rango*5 && i <=rango*6) DOS();
  }
}


//escribe la letra A mayúscula
void A(){
  //primera y ultima columna
  
  //filas
  digitalWrite(f1,0);  
  digitalWrite(f2,1); 
  digitalWrite(f3,1); 
  digitalWrite(f4,1); 
  digitalWrite(f5,1);

  //columnas
  digitalWrite(c1,0); 
  digitalWrite(c2,1); 
  digitalWrite(c3,1); 
  digitalWrite(c4,1); 
  digitalWrite(c5,0);
  delay(del);
  
  //lineas de la mitad
  
  //filas
  digitalWrite(f1,1); 
  digitalWrite(f2,0); 
  digitalWrite(f3,1); 
  digitalWrite(f4,0); 
  digitalWrite(f5,0);

  //columnas
  digitalWrite(c1,1); 
  digitalWrite(c2,0); 
  digitalWrite(c3,0); 
  digitalWrite(c4,0); 
  digitalWrite(c5,1);
  delay(del);
}

void B(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  
  delay(del);
  
  //lineas de la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
 
  delay(del);
  
  //ultima columna
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
 
  delay(del);

}

void C(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  //lineas de la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
}

void D(){
  //lineas de arriba y abajo
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);

  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //ultima columna
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  
}

void E(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);  

  //lineas
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
}

void _F(){
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);

}

void G(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  //linea del final
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //linea de la mitad
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //columna del final
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

}

void H(){
  //linea de la mitad
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //columnas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
}

void I(){
  //lineas
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
    
  //columna de la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}
//j,k,l,m
void J(){
  //columna mitad
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //primera fila
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);

  //utlima fila
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}

void K(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(1);
  
  //diagonales 1
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(1);

    //diagonales 2
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(1);

      //diagonales 3
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(1);

  //diagonales 4
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

    //diagonales 5
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
}

void L(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //ultima fila
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
}

//--------------

void M(){
//Columnas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);

  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  // Diagonal
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);

  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);

  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);

  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}

void N(){
  //Columnas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);

  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  // Diagonal
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);

  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);

  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);

  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
}

void O(){
  //filas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);

  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  //
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);

  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
}

void P(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
 
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
 
  //parte ovalada de la R
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
 
  // Columna final
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
}


void Q(){
  //Columna Izquierda
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
 
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //Columna Derecha
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  //Fila Superior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);

  //Fila Inferior
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
 
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //Pata
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
}

void R(){
  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  //parte ovalada de la R
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  // Columna final
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  //Pata de la R1 px1
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  //Pata de la R1 px2
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
}

void S(){
  //Fila superior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //Filas intermedias
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  //Union Izquierda
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  //Union derecha
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
}

void T(){
    //Fila superior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //Columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del); 
}

void U(){
  //Columnas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del); 
  
  //Fila inferior
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del); 
}

void V(){
  //Columnas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  //Triangulo V
  
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}

void W(){
  //Columnas
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  // ^ DE LA W
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  // ^ DE LA W
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}

void X(){
  //Esquinas X exterior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  //Esquinas X interior
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  //Centro
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del); 
}

void Y(){
  //Esquinas Y exterior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  //Esquinas Y Interior
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
  
  //Columna
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}


void Z(){
  //Esquinas Z exterior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //Lateral
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  //Lateral
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  //Lateral
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del); 
}

void _N(){
  //~
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);

  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //laterales
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
 
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  //Diagonal
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //Diagonal
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //Diagonal
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);

}

void TRES(){
  //lineas de arriba, abajo y de la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
    
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);

  //ultima columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
    
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
}

void CUATRO(){
  //ultima columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
    
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);

  //linea de la mitad
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
    
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);

  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
    
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}

void CINCO(){
  S();
}

void SEIS(){
  //lineas de arriba, abajo y de la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
    
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);

  //primera columna
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
    
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //ultima columna
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
    
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
}


void apagarTodo() {
  int filas[] = {f1, f2, f3, f4, f5};
  int columnas[] = {c1, c2, c3, c4, c5};
  for (int i=0; i<5; i++){
    digitalWrite(filas[i], 0);
    digitalWrite(columnas[i], 1);
  }
 }

void imprimirCaracter(char letra){
  if(letra == 'A')A();
  else if(letra == 'B')B();
  else if(letra == 'C')C();
  else if(letra == 'D')D();
  else if(letra == 'E')E();
  else if(letra == 'F')_F();
  else if(letra == 'G')G();
  else if(letra == 'H')H();
  else if(letra == 'I')I();
  else if(letra == 'J')J();
  else if(letra == 'K')K();
  else if(letra == 'L')L();
  else if(letra == 'M')M();
  else if(letra == 'N')N();
  else if(letra == 'Ñ')_N();
  else if(letra == 'O')O();
  else if(letra == 'P')P();
  else if(letra == 'Q')Q();
  else if(letra == 'R')R();
  else if(letra == 'S')S();
  else if(letra == '0')O();
  else if(letra == '1')UNO();
  else if(letra == '2')DOS();
  else if(letra == '3')TRES();
  else if(letra == '4')CUATRO();
  else if(letra == '5')CINCO();
  else if(letra == '6')SEIS();
  else if(letra == '7')SIETE();
  else if(letra == '8')OCHO();
  else if(letra == '9')NUEVE();
  else if(letra == '.')COMA();

}

void SIETE(){
  //Esquinas Z exterior
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //Lateral
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  //Medio
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del);
}

void OCHO(){
  //Lados
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  // Medios

  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del); 
}

void NUEVE(){
  //Lados
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
  
  // Medios
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,1);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,1);
  delay(del); 
  
  // Izquierdo
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del); 
}

void COMA(){
  // Izquierdo
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del); 
}

void UNO(){
  //lineas
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
 
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
   
  //columna de la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);
  digitalWrite(f5,1);
 
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);

  //primera fila hasta la mitad
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
 
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
}

void DOS(){
  //MEDIOS
  digitalWrite(f1,1);
  digitalWrite(f2,0);
  digitalWrite(f3,1);
  digitalWrite(f4,0);
  digitalWrite(f5,1);
  
  digitalWrite(c1,0);
  digitalWrite(c2,0);
  digitalWrite(c3,0);
  digitalWrite(c4,0);
  digitalWrite(c5,0);
  delay(del);
  
  //LATERALES
  digitalWrite(f1,0);
  digitalWrite(f2,0);
  digitalWrite(f3,0);
  digitalWrite(f4,1);
  digitalWrite(f5,0);
  
  digitalWrite(c1,0);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,1);
  delay(del);
  
  digitalWrite(f1,0);
  digitalWrite(f2,1);
  digitalWrite(f3,0);
  digitalWrite(f4,0);
  digitalWrite(f5,0);
  
  digitalWrite(c1,1);
  digitalWrite(c2,1);
  digitalWrite(c3,1);
  digitalWrite(c4,1);
  digitalWrite(c5,0);
  delay(del);
}

double conversion(int valor){
  return (double(valor) * 50) / 1023;
}

double conversionTem(int valor){
  return (double(valor) * 100) / 1023;
}

void loop() {
  //int botonres = digitalRead(boton);
  //Serial.println(botonres);
  //C(); 
  //noInterrupts();
  aux ++;

  if (estado == false){
    int valor = analogRead(entrada);
    String palabra = String(conversion(valor));
    //Serial.println(valor);
    Serial.print((palabra.toDouble() / 10));
    Serial.println(" kilo ohmios");
    //Serial.print(aux);
    //Serial.println("aux");
    if(aux<rango){
      imprimirCaracter(palabra[0]);
    }
    else if(aux>=rango && aux<rango*2){
      COMA();
    }
    else if(aux>=rango*2 && aux<rango*3){
      imprimirCaracter(palabra[1]);
    }
    else if(aux>=rango*3 && aux<rango*4){
      imprimirCaracter(palabra[3]);
    }
    else if(aux>=rango*4 && aux<rango*5){
      O();
    }
    else if(aux>=rango*5 && aux<rango*6){
      H();
    }
    else if(aux>=rango*6 && aux<rango*7){
      M();
    }
    else{
      aux = 0;
      //interrupts();
    }
  }
  else{
  int valor = analogRead(entrada);
  String palabra = String(conversionTem(valor));
  Serial.print(palabra);
  //Serial.print((palabra.toDouble()));
  Serial.println(" grados celsius");

  if (palabra.length() == 4){
    if(aux<rango){
           imprimirCaracter(palabra[0]);

    }
    else if(aux>=rango && aux<rango*2){
           COMA();
    }  
    else if(aux>=rango*3 && aux<rango*4){
      imprimirCaracter(palabra[2]);
    }
    else if(aux>=rango*5 && aux<rango*6){
           imprimirCaracter(palabra[3]);
    }
    else if(aux>=rango*7 && aux<rango*8){
           C();
    }
    else if(aux>=rango*9 && aux<rango*10){
           E();
    }
    else if(aux>=rango*11 && aux<rango*12){
           L();
    }
    else aux = 0;
  }

   else if (palabra.length() == 5){
    Serial.print(aux);
    Serial.println("aux");
    if(aux<rango){
           imprimirCaracter(palabra[0]);
    
    }
    else if(aux>=rango && aux<rango*2){
           imprimirCaracter(palabra[1]);

    }  
    
    else if(aux>=rango*3 && aux<rango*4){
      COMA();
    }
    else if(aux>=rango*5 && aux<rango*6){
      imprimirCaracter(palabra[3]);
    }
    else if(aux>=rango*7 && aux<rango*8){
           imprimirCaracter(palabra[3]);
    }
    else if(aux>=rango*9 && aux<rango*10){
           C();
    }
    else if(aux>=rango*11 && aux<rango*12){
           E();
    }
    else if(aux>=rango*13 && aux<rango*14){
           L();
    }
    else  aux = 0;
  }
    
  } 
    
  if (digitalRead(boton) == HIGH)
    estado = !estado;
}
