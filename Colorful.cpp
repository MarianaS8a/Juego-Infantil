#include <iostream>
#include "miniwin.h" //librería para utilizada para dibujar
using namespace miniwin;
using namespace std;
#include "Botones.h"
#include "Figuras.h"
#include "Tres_menos.h"
#include "Cuatro_lados.h"
#include "Cuatro_mas.h"

/*
Descripción: este programa es un videojuego educativo para niños que contiene tres categorías, introducción a las
figuras, nombres y colores.

En este proyecto se utilizó la librería miniwin, la cual es un conjunto de funciones bastante simples que puede dibujar
algunas figuras, mostrar mensajes,escribir texto y reconocer acciones del teclado y mouse.
*/

//menu es una función que no pertenece a ninguna clase
//dibuja la página de inicio del programa
void menu(){
    color(4);
    texto(400,50,"Bienvenido a COLORFUL, juego educativo para niños");
    color(3);
    texto(400,100,"Selecciona la modalidad que deseas jugar");
    color(2);
    texto(450,150,"a) Introducción a las figuras");
    color(5);
    texto(450,200,"b) El nombre de las figuras");
    color(6);
    texto(450,250,"c) El color de las figuras");
    color(7);
    texto(450,300,"Escribe todo en la consola");
}

int main(){
    vredimensiona(1250, 500);//se le da una dimensión a la ventana
    //se declara que el usuario puede responder 6 veces
    char tecla_1;
    char tecla_2;
    char tecla_3;
    char tecla_4;
    char tecla_5;
    char tecla_6;
    char figura;//se utilizará para guardar la respuesta de cada figura

    //se instancian los objetos de la clase Tres_menos y sus Botones
    Botones Figura_1("a) Ninguno","b) Dos","c) Uno");
    Tres_menos line(3,"linea",0,"¿Cuántos vértices tiene una línea recta?",
                    Figura_1,'b',tecla_2);
    Botones Figura_2("a) Ninguno","b) Dos","c) Tres");
    Tres_menos triangle(3,"triangulo",3,
                        "¿Cuántos vértices tiene un triángulo?",
                        Figura_2,'c',tecla_4);
    Botones Figura_3("a) Uno","b) 360","c) Ninguno");
    Tres_menos circle(3,"circulo",0,"¿Cuántos lados tiene un círculo?",
                      Figura_3,'c',tecla_6);

    //se instancian los objetos de la clase Cuatro_lados y sus Botones
    Botones Figura_4("a) Cuadrado","b) Rombo","c) Rectángulo");
    Cuatro_lados rectangle(3,"rectangulo",4,Figura_4,'c',tecla_2);
    Botones Figura_5("a) Cuadrado","b) Rombo","c) Rectángulo");
    Cuatro_lados rhombus(3,"rombo",4,Figura_5,'b',tecla_4);
    Botones Figura_6("a) Cuadrado","b) Rombo","c) Rectángulo");
    Cuatro_lados square(3,"cuadrado",4,Figura_6,'a',tecla_6);

    //se instancian los objetos de la clase Cuatro_mas y sus Botones
    Botones Figura_7("a) Morada","b) Magenta","c) Roja");
    Cuatro_mas irreg_1(5,"irregular_6",6,Figura_7,'b',tecla_2);
    Botones Figura_8("a) Morada","b) Magenta","c) Roja");
    Cuatro_mas irreg_2(1,"irregular_7",6,Figura_8,'c',tecla_4);
    Botones Figura_9("a) Cyan","b) Turqueza","c) Aqua");
    Cuatro_mas penta(6,"pentagono",6,Figura_9,'a',tecla_6);

    menu();
    refresca();
    cin >> tecla_1;//el usuario selecciona la categoría que quere jugar
        //se usa switch para dibujar el primer objeto de la categoría
        switch(tecla_1){
            case 'a':
            {
                borra();
                line.dibujar_figura();
                line.dibujar_botones();
                refresca(); //refresca es una función para realizar cambios al dibujar
                break;
            }
            case 'b':
            {
                borra();
                rectangle.dibujar_figura();
                rectangle.dibujar_botones();
                refresca();
                break;
            }
            case 'c':
            {
                borra();
                irreg_1.dibujar_figura();
                irreg_1.dibujar_botones();
                refresca();
                break;
            }

        }

        cin >> tecla_2;//el usuario responde la primera pregunta
        //dependiendo de la categoría elegida es el resultado correcto
        if (tecla_1 == 'a')
            figura = line.get_respuesta();
        else if (tecla_1 == 'b')
            figura = rectangle.get_respuesta();
        else if (tecla_1 == 'c')
            figura = irreg_1.get_respuesta();
        borra();
        if (tecla_2 == figura)//se le notifica al usuario si su respuesta es correcta o no
        {
            color(2);
            texto(500,250,"¡La respuesta es correcta! :)");
            refresca();
        }
        else{
            color(1);
            texto(500,250,"La respuesta es incorrecta :(");
            refresca();
        }

        texto(500,300,"Escribe c para continuar");
        refresca();

        cin >> tecla_3;//si el usuario no escribe c para continuar, el programa no avanza
        if (tecla_3 != 'c'){
            mensaje("Por favor escribe la letra c");
            cin >> tecla_3;
        }

        //switch para dibujar la segunda pregunta dependiendo de la categoría elegida
        switch(tecla_1){
            case 'a':
            {
                borra();
                triangle.dibujar_figura();
                triangle.dibujar_botones();
                refresca();
                break;
            }
            case 'b':
            {
                borra();
                rhombus.dibujar_figura();
                rhombus.dibujar_botones();
                refresca();
                break;
            }
            case 'c':
            {
                borra();
                irreg_2.dibujar_figura();
                irreg_2.dibujar_botones();
                refresca();
                break;
            }

        }

        cin >> tecla_4;//el usuario escribe su respuesta de la pregunta 2
        if (tecla_1 == 'a')
            figura = triangle.get_respuesta();//se le asigna un nuevo valor a figura para obtener las respuesta correcta
        else if (tecla_1 == 'b')
            figura = rhombus.get_respuesta();
        else if (tecla_1 == 'c')
            figura = irreg_2.get_respuesta();
        borra();
        if (tecla_4 == figura)//se notifica si la respuesta es correcta o no
        {
            color(2);
            texto(500,250,"¡La respuesta es correcta! :)");
            refresca();
        }
        else{
            color(1);
            texto(500,250,"La respuesta es incorrecta :(");
            refresca();
        }

        texto(500,300,"Escribe c para continuar");
        refresca();
        cin >> tecla_5;//el jugador debe escribir c nuevamente para continuar
        if (tecla_5 != 'c'){
            mensaje("Por favor escribe la letra c");
            cin >> tecla_5;
        }

        //switch para dibujar la tercera figura de cada categoría
        switch(tecla_1){
            case 'a':
            {
                borra();
                circle.dibujar_figura();
                circle.dibujar_botones();
                refresca();
                break;
            }
            case 'b':
            {
                borra();
                square.dibujar_figura();
                square.dibujar_botones();
                refresca();
                break;
            }
            case 'c':
            {
                borra();
                penta.dibujar_figura();
                penta.dibujar_botones();
                refresca();
                break;
            }

        }

        cin >> tecla_6;//respuesta de la tercera pregunta
        if (tecla_1 == 'a')
            figura = circle.get_respuesta();
        else if (tecla_1 == 'b')
            figura = square.get_respuesta();
        else if (tecla_1 == 'c')
            figura = penta.get_respuesta();
        borra();
        if (tecla_6 == figura)//se compara el valor introducido por el jugador y el valor correcto
        {
            color(2);
            texto(500,250,"¡La respuesta es correcta! :)");
            refresca();
        }
        else{
            color(1);
            texto(500,250,"La respuesta es incorrecta :(");
            refresca();
        }

        refresca();


return 0;
}

/*
Pruebas:

categoría 1
a,a,c,a,c,a -respuesta 1  incorrecta  ,respuesta 2 incorrecta,incorrecta
a,b,c,b,c,b -respuesta 1  correcta  ,respuesta 2 incorrecta,incorrecta
a,c,c,c,c,c -respuesta 1  incorrecta  ,respuesta 2 correcta, correcta

categoría 2
b,a,c,a,c,a -respuesta 1  incorrecta  ,respuesta 2 incorrecta, correcta
b,b,c,b,c,b -respuesta 1  incorrecta  ,respuesta 2 correcta,incorrecta
b,c,c,c,c,c -respuesta 1  correcta  ,respuesta 2 incorrecta,incorrecta

categoría 3
c,a,c,a,c,a -respuesta 1  incorrecta  ,respuesta 2 incorrecta,correcta
c,b,c,b,c,b -respuesta 1  correcta  ,respuesta 2 incorrecta,incorrecta
c,c,c,c,c,c -respuesta 1  incorrecta  ,respuesta 2 correcta,incorrecta

Al escribir otra letra que no se en c cuando el programa lo pide, no continúa y aparece aviso

*/
