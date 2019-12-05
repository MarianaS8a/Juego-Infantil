#include "Botones.h"
//La clase Figuras guarda atributos que serán usados después para hacer preguntas.
class Figuras{
    protected: //Los atributos son protected para que solo las clases que heredan de Figuras puedan acceder a ellos
        string nombre;
        int lados;
        int colores;
        Botones a;
        char respuesta; //Es la letra correcta en la pregunta de opción multiple
        char input;//Es la letra que el usuario introduce para responder las preguntas

    public:
        Figuras();
        Figuras(int col,string nom,int lad,Botones ha,char res,char in);
        char get_respuesta(); //Se usa en el main para comparar la respuesta con el input del usuario
        void dibujar_botones(); //Dibuja los botones de la clase Botones
};

Figuras::Figuras(){
    nombre = "";
    lados = 0;
    colores = 0;
    Botones a("","","");
    respuesta = 'A';
    input = 'A';
}

Figuras::Figuras(int col,string nom,int lad,Botones ha,char res,char in){
    nombre = nom;
    lados = lad;
    colores = col;
    a = ha;
    respuesta = res;
    input = in;
}

char Figuras::get_respuesta(){
    return respuesta;
}

//Dibuja tres botones rectangulares con texto dentro
void Figuras::dibujar_botones(){
    color (4); //Los colores de miniwin son negro, rojo, verde, azul, amarillo, magenta, cyan, blanco (0-7)
    rectangulo_lleno(685,187,800,225);
    rectangulo_lleno(685,245,800,283);
    rectangulo_lleno(685,300,800,341);

    color(0);
    texto(700, 200, a.get_boton_uno());
    texto(700, 250, a.get_boton_dos());
    texto(700, 300, a.get_boton_tres());

}
