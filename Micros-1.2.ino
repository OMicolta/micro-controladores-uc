/*Constantes, si es un arduino uno o mega u otro, estas constantes se deben cambiar
  son los pines asignados para prender o apagar filas o columnas
La matriz es de 8x8, se esta usando como si fuera una de 5x5 para reducir el tamaño
*/

//filas
const int f1 = 21;
const int f2 = 20;
const int f3 = 19;
const int f4 = 18;
const int f5 = 17;

//elemento de cada columna
const int c1 = 52;
const int c2 = 50;
const int c3 = 48;
const int c4 = 46;
const int c5 = 44;
//----------------------

int del = 2;

//esta variable se usa para mostrar varias letras, en la funcion loop
//ya que con delay pone problema
int aux = 0;

//se utiliza para tener 3 estados al presionar el boton
int val = 0;

int boton = 13;

int botonDelay = A0;

//se usa para el tiempo en que muestra cada letra
int rango = 20;

void setup() {
  Serial.begin(9600);//para usar el serial

  pinMode(boton,INPUT);
  pinMode(botonDelay,INPUT);

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

void apagarTodo() {
  int filas[] = {f1, f2, f3, f4, f5};
  int columnas[] = {c1, c2, c3, c4, c5};
  for (int i=0; i<5; i++){
    digitalWrite(filas[i], 0);
    digitalWrite(columnas[i], 1);
  }
 }


void loop() {
  aux ++;
  if(digitalRead(botonDelay)==HIGH){
    apagarTodo();
    delay(1000);
    rango += 100;
  }
  if(digitalRead(boton)==HIGH){
    if(val == 0){apagarTodo();delay(1000);val=1;}
    else if(val == 1){apagarTodo();delay(1000);val = 2;}
    else if(val == 2){apagarTodo();delay(1000);val = 0;}
  }
  if(val == 0){
    apagarTodo();
    aux=0;
  }
  else if(val == 1){
    if(aux<rango) O();
    else if(aux>=rango && aux<rango*2) I();
    else if(aux>=rango*2 && aux<rango*3) V();
    else if(aux>=rango*3 && aux<rango*4) A();
    else if(aux>=rango*4 && aux<rango*5) R();
    else aux = 0;
  }
  else if(val == 2){
    if(aux<rango) M();
    else if(aux>=rango && aux<rango*2) I();
    else if(aux>=rango*2 && aux<rango*3) C();
    else if(aux>=rango*3 && aux<rango*4) O();
    else if(aux>=rango*4 && aux<rango*5) L();
    else if(aux>=rango*5 && aux<rango*6) T();
    else if(aux>=rango*6 && aux<rango*7) A();
    else aux = 0;
  }

  if (rango > 1000) rango = 20;
}
