#include <iostream>

#define blanco "\033[0m"
#define rojo "\033[31m"
#define verde   "\033[32m"
#define amarillo  "\033[33m"
#define azul    "\033[34m"

int main() {
    std::cout <<rojo<<"\t Generaciones de Computadoras" <<blanco<< std::endl;
    
    std::cout <<verde<<"Primera Generacion (1940-1950):" <<blanco<< std::endl;
    std::cout << "\t Utilizaban valvulas electronicas y reles." << std::endl;
    
    std::cout <<verde<<"Segunda Generacion (1950-1960):" <<blanco<< std::endl;
    std::cout << "\t Se introdujeron los transistores, reduciendo el tamano y el costo." << std::endl;
    
    std::cout <<verde<<"Tercera Generacion (1960-1970):" <<blanco<< std::endl;
    std::cout << "\t Se usaron circuitos integrados para mejorar la velocidad y la eficiencia." << std::endl;
    
    std::cout <<verde<<"Cuarta Generacion (1970-1980):" <<blanco<< std::endl;
    std::cout << "\t Se desarrollaron microprocesadores y las computadoras personales." << std::endl;
    
    std::cout <<verde<<"Quinta Generacion (1980 en adelante):" <<blanco<< std::endl;
    std::cout << "\t Se avanzo en la tecnologia de circuitos integrados y se investigo la IA." << std::endl;
    
    std::cout <<amarillo<< "Caracteristicas de la Primera Generacion de Computadoras:" <<blanco<< std::endl;

    std::cout << "1. Uso de valvulas electronicas: Las computadoras de la primera generacion utilizaban valvulas electronicas como componentes principales. Estas valvulas funcionaban como interruptores electronicos y permitian realizar calculos y procesamientos basicos." << std::endl;
    
    std::cout << "2. Uso de reles: Ademas de las valvulas, las primeras computadoras tambien empleaban reles electromagneticos para ciertas tareas de procesamiento y control. Estos reles eran mas lentos y menos confiables que las valvulas, pero seguian siendo componentes esenciales en esos sistemas." << std::endl;
    
    std::cout << "3. Tamano y consumo de energia: Las computadoras de esta generacion eran enormes en comparacion con las tecnologias modernas. Ocupaban salas enteras y requerian sistemas de enfriamiento debido al calor generado por las valvulas y reles en funcionamiento. Ademas, consumian una gran cantidad de energia electrica." << std::endl;

	std::cout <<amarillo<<"Caracteristicas de la Segunda Generacion de Computadoras:" <<blanco<< std::endl;

    std::cout << "1. Uso de transistores: En la segunda generacion de computadoras, se reemplazaron las voluminosas valvulas electronicas por transistores. Los transistores eran mas pequenos, mas eficientes en energia y generaban menos calor, lo que permitio que las computadoras fueran mas rapidas y confiables." << std::endl;
    
    std::cout << "2. Tamano reducido: Gracias al uso de transistores en lugar de valvulas, las computadoras de la segunda generacion eran mucho mas pequenas y ocupaban menos espacio en comparacion con sus predecesoras. Esto facilito su instalacion y mantenimiento." << std::endl;
    
    std::cout << "3. Mayor velocidad y eficiencia: Con la introduccion de los transistores, las computadoras de la segunda generacion lograron un aumento significativo en la velocidad de procesamiento y la eficiencia energetica. Esto permitio realizar calculos mas complejos en menos tiempo y con menos consumo de energia." <<blanco<< std::endl;


    return 0;
}

