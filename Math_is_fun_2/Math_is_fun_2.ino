/****************************************************************
 **                                                            **
 **                    Math is fun                             **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 30/01/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int a = 3;        // definim les variables quin valor seran 
int b = 4;       // definim les variables quin valor seran 
int h;          // definim les variables que en aquest cas no sabem el seu valor  
int resultat1; // Guarda el resultat de la variable a
int resultat2; // Guarda el resultat de la variable b
int resultat3; // Guarda el resultat de la variable h


 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);       // configurar una bibloteca al serial a 9600 bps

  Serial.println("Aqui tenim un calcul de una hipotenusa"); // ens diu Aqui tenim un calcul de una hiputenusa i tanca la linea, la pròxima linia començaria a sota. 
  Serial.print("a = ");                 // Llegeix el valor de la variable 
  Serial.println(a);                    // Ens diu el valor de la variable 
  Serial.print("b = ");                 // Llegeix el valor de la variable
  Serial.println(b);                    // Ens diu el valor de la variable
  Serial.print("h = ?");                 // Llegeix el valor de la variable
  Serial.println(h);                    // Ens diu el valor de la variable

  Serial.println("Ens diu el valor del quadrat de la variable a");   // Posa en el arduino "Ens diu el valor del quadrat de la variable a"
  Serial.print(resultat1=pow(3,2)); // Llegeix el valor de les variables i fa el quadrat de la variable a 
  Serial.println();              // ens diu el resultat del quadrat 
  delay(1000);                     // s'espera 1 segon 

  Serial.println("Ens diu el valor del quadrat de la variable b"); // Posa en el arduino "Ens diu el valor del quadrat de la variable b"
  Serial.print(resultat2=pow (4,2));       // Llegeix el valor de les variables i fa el quadrat de la variable b 
  Serial.println();                      // Ens diu el resultat del quadrat  
  delay(2000);                            // S'espera 2 segons 

  Serial.println("Ens diu el valor de la suma de les variables a+b"); // Posa en el arduino "Ens diu el valor de la suma de les variables a+b"
  Serial.print(resultat3= resultat1+resultat2);       // Llegeix el valor de les variables i fa la suma
  Serial.println();          // Ens diu el resultat de la suma
  delay(3000);                    // S'espera 3 segons 

  Serial.println("Ens diu el valor de l'arrel quadrada"); // Posa en el arduino "Ens deiu el valor de l'arrel quadrada"
  Serial.println(sqrt(resultat3));          // Ens diu el resultat de l'arrel quadrada 
  delay(4000);                              // S'espera 4 segons 
  
 
  
}



//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  
                      // no fa cap repetició 
}


//************************* FUNCIONS ****************************
   // En aquest programa podem veure com fa el calcul de la hipotenusa.  
   
