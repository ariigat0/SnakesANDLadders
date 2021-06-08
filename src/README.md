README
ACTIVITY: SNAKES & LADDERS
ARIADNE ALVAREZ REYES | A01652080
08|06|2021 :D 

Intrucciones para compilar y ejecutar el programa desde la consola de comandos:

1. alias gpp='g++ -g -O0 -std=c++17'

2. gpp -o snakes *.cpp

3. ./snakes

-CONCEPTOS POO UTILIZADOS-
- Clases
    - Constructores
    - Destrcutores
    - Sobrecarga de constructores
- Abstracción
- Encapsulamiento
- Polimorfismo
- Herencia
- Sobrecarga de operadores

Este código consta de 8 clases con headers, sources y el -main-
para poder separar por objetos y funcionalidad los elementos del juego. Dentro de los cuales cada uno tiene su propio constructor y destructor, asimismo, está encapsulado utilizando los valores private y public correspondientes. Main se llama snakes.cpp y solamente contiene la clase MyGame 

En algunos casos se utilizó la sobre carga de cosntructores para la creación del objeto. Por otro lado, se simplificó de la mejor manera posible cada clase.

-DISEÑO-
Como se mencionó anteriormente se utilizaron 8 clases, las cuales son las siguientes:

1. Dice: Contiene el dado que se utilizará para obtener el movimiento posible en cada turno
2. Tile: Contiene la información de cada casilla del tablero (tipo de la casilla, ubicación dentro del tablero)
3. Board: Contiene un arreglo de tiles de -n- cantidad para formar el tablero
4. Player: Contiene la información del jugador como la posición actual, el nombre del jugador
5. MyGame: Contiene toda la lógica del juego, en esta parte se implementan todas las clases anteriores.
6. SnakeTile: Es una clase hija de Tile y tiene una función de polimorfismo
7. LadderTile: Es una clase hija de Tile y tiene una función de polimorfismo
8. Turn: Contiene los turnos en el juego. Se usa una sobrecarga de operadores para imprimir el turno.





