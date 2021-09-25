


#ifndef OPERACIONES_H_
#define OPERACIONES_H_
/**
 * @brief suma funcion que realiza suma de dos numeros
 * @param numero1 numero que se le realizara la suma
 * @param numero2 numero que decidira cuanto suma al numero1
 * @return retorna el resultado de la suma
 */
int suma (int numero1, int numero2);
/**
 * @brief resta funcion que realiza resta entre dos numeros
 * @param numero1 numero que se realizara la resta
 * @param numero2 numero que decidira cuanto resta al numero1
 * @return retorna el resultado de la resta
 */
int resta (int numero1, int numero2);
/**
 * @brief division funcion que realiza division entre dos numeros
 * @param numero1 numero dividendo de la funcion
 * @param numero2 numero divison de la funcion
 * @return retorna un flotante como respuesta entre los dos numeros
 */
float division(int numero1, int numero2);
/**
 * @brief multiplicar funcion que realiza multiplicacion entre dos numeros
 * @param numero1 numero al que se va multiplicar
 * @param numero2 numero que decide cuantas veces se va multiplicar el numero1
 * @return retornara el resultado de la multiplicacion
 */
int multiplicar(int numero1,int numero2);
/**
 * @brief factorialNumeroUno funcion que realizara factorial de un numero
 * @param numero1 numero a realizar la factorizacion
 * @return retornara el resultado
 */
int factorialNumeroUno(int numero1);
/**
 * @brief factorialNumeroDos funcion que realizara factorial de un numero
 * @param numero2 numero a realizar la factorizacion
 * @return retornara el resultado
 */
int factorialNumeroDos(int numero2);
/**
 * @brief informarResultado funcion que mostrara los resultados de los calculos
 * @param n1 el primer numero introducido
 * @param n2 el segundo numero introducido
 * @param rSuma resultado de la suma
 * @param rResta resultado de la resta
 * @param rDivision resultado de la suma
 * @param rMultiplicar resultado de la multiplicacion
 * @param factNum1 resultado de la factorizacion del numero1
 * @param factNum2 resultado de la factorizacion del numero2
 */
void informarResultados(int n1,int n2,int rSuma,int rResta,float rDivision,int rMultiplicar,int factNum1,int factNum2);
/**
 * @brief mostrarMenu funcion que mostrar el menu a selecionar por el usuario
 */
void mostrarMenu(void);


#endif /* OPERACIONES_H_ */
