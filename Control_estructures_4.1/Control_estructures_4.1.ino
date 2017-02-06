/****************************************************************
 **                                                            **
 **                    Control estructures 4.1                 **                                                           
 **                    SERIAL                                  **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 06/02/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int tempAigua = 101;        // definim les variables quin valor seran 
          



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  Serial.begin(9600);     // Ens escriu els valors en la bibloteca 9600bps

  if ( tempAigua > 100)   // Ens diu " que si tempAigua és més gran que 100º C "
  {
    Serial.print("Aigua supera els 100C, esta bullint!");   // Si a la operació de abans la tempAigua és més gran ens dira el següent "Aigua supera els 100C, esta bullint!"
  } 
}




//*************************** LOOP ******************************

void loop()         // inicia el bucle del programa 
{
                    // No fa res 
}

                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra que si supera un valor faci un operació o si no supera el valor no faci res.  
   
