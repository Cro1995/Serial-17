/****************************************************************
 **                                                            **
 **                    Math is fun 9                           **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 06/02/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int a = 3;        // definim les variables quin valor seran 
int b = 2;       // definim les variables quin valor seran 
int d;          // definim les variables quin valor seran 



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);      // Ens ho guarda els resultats en la bibloteca 9600 bps

  Serial.println("Aqui hi ha una divisió: ");  // Ens llegeix el següent "Aqui hi ha una divisió"

  Serial.print("a = ");       // Ens llegeix el valor de la variable a
  Serial.println(a);          // Salta a la següent linea 
  Serial.print("b = ");       // Ens diu el valor de la variable b
  Serial.println(b);          // Salta a la següent linea 

  d = a / b;
 
  Serial.print("a / b = ");       // Fa la següent operació 
  Serial.println(d);              // Ens diu el valor de la variable d 

}



//*************************** LOOP ******************************

void loop() {          // inicia el bucle del programa 
  
                      // no fa cap repetició 
}


//************************* FUNCIONS ****************************
   // En aquest programa podem veure com fa una divisió i en el resultat nomes ens dóna el residu de la operació.  
   
