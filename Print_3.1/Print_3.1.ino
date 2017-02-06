/****************************************************************
 **                                                            **
 **                    Print 3.1                               **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 06/02/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int a = 64;        // definim les variables quin valor seran 
          



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);    // Ens posa totes les operacions a la llibreria 9600 bps

  Serial.println("Diferents formats d'expressar el mateix nombre:");  // Llegeix i ens diu el següent "diferents formats d'expressar el mateix nombre"

  Serial.write(a); // Llegeix la variable assignada 
  Serial.println(); // Salta de linea 
  
  Serial.println(a);  
  Serial.println(a,DEC); // LLegeix la variable i posa el valor en decimal
  delay (1000);
  
  Serial.println(a,BIN);  // Llegeix la variable i posa el valor en binari 
  delay(1000);
  
  Serial.println(a,HEX);   // Llegeix la variable i posa el valor en Hexadecimal
  delay(1000);
  
  Serial.println(a,OCT);  // Llegeix la variable i posa el valor en Octal 
  delay(1000);
  
}




//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  
                      // no fa cap repetició 
}


//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra el mateix numero en diferents sistemes.  
   
