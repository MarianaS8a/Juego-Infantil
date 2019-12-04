//Cuatro_mas hereda de Figuras porque son figuras con más de cuatro lados
class Cuatro_mas:public Figuras{
    private:
        string pregunta;
    public:
        Cuatro_mas();
        Cuatro_mas(int col,string nom,int lad,Botones ha,char res,char in);
        void dibujar_figura();//dibuja las figuras con más de cuatro lados
};

Cuatro_mas::Cuatro_mas(){

}

Cuatro_mas::Cuatro_mas(int col,string nom,int lad,Botones ha,char res,
                       char in):Figuras(col,nom,lad,ha,res,in){
    pregunta = "¿De qué color es la línea de la figura?";//la pregunta también se declara desde el constructor
}

//Dibuja pentágonos y dos figuras irregulares
void Cuatro_mas::dibujar_figura(){
    color(colores);
    texto(700, 100, pregunta);
    if (nombre == "pentagono"){
        linea(200,50,50,250);
        linea(200,50,350,250);
        linea(100,450,50,250);
        linea(300,450,350,250);
        linea(100,450,300,450);
    }
    else if (nombre == "irregular_6"){
        linea(200,50,50,250);
        linea(50,250,100,300);
        linea(100,300,500,300);
        linea(500,300,200,200);
        linea(200,200,300,100);
        linea(300,100,200,50);
    }
    else if (nombre == "irregular_7"){
        linea(200,50,50,250);
        linea(50,250,150,300);
        linea(150,300,600,350);
        linea(600,350,500,200);
        linea(500,200,600,50);
        linea(600,50,500,100);
        linea(500,100,200,50);
    }
}
