//Cuatro_lados también hereda de figuras porque son figuras con cuatro lados
class Cuatro_lados:public Figuras{
    private:
        string pregunta;
    public:
        Cuatro_lados();
        Cuatro_lados(int col,string nom,int lad, Botones ha,char res,char in);
        void dibujar_figura();//dibuja las figuras con cuatro lados
};

Cuatro_lados::Cuatro_lados(){

}

Cuatro_lados::Cuatro_lados(int col,string nom,int lad,Botones ha,char res,
                           char in):Figuras(col,nom,lad,ha,res,in){
    pregunta ="¿Cómo se llama la figura?";//En esta clase la pregunta ya está definida
}

//dibujar_figura traza rectángulos,cuadrados y rombos
void Cuatro_lados::dibujar_figura(){
    color(colores);
    texto(700, 100, pregunta);
    if (nombre == "rectangulo")
        rectangulo_lleno(200,150,400,200);

    else if (nombre == "cuadrado")
        rectangulo_lleno(200,150,300,250);

    else if (nombre == "rombo"){
        linea(200,50,300,250);
        linea(200,50,100,250);
        linea(200,475,100,250);
        linea(200,475,300,250);
    }

}
