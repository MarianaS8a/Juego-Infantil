

//Tres_menos hereda de Figuras porque tiene figuras de tres y menos lados
class Tres_menos: public Figuras{
    private:
        string pregunta; //Son las preguntas que se le hacen al usuario
    public:
        Tres_menos();
        Tres_menos (int col,string nom,int lad,string preg,
                    Botones ha,char res,char in);
        void dibujar_figura();//Dibuja la figura dependiendo del nombre que se le asignó

};


Tres_menos :: Tres_menos(): Figuras(){
    pregunta = "";
}

Tres_menos::Tres_menos (int col,string nom,int lad,string preg,Botones ha,
                        char res,char in):Figuras(col,nom,lad,ha,res,in){
    pregunta = preg;
}

//dibujar_figura traza círculos,triángulos y líneas
void Tres_menos::dibujar_figura(){
    color(colores);
    texto(700, 100, pregunta);
    if (nombre == "circulo")
        circulo_lleno(500,250,100);
    else if (nombre == "triangulo"){
        linea(200,50,250,250);
        linea(200,50,150,250);
        linea(250,250,150,250);
    }
    else if (nombre == "linea"){
        linea(200,250,600,250);
    }
}
