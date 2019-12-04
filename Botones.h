//la clase Botones guarda los nombres de las opciones múltiples de cada pregunta
class Botones{
    private:
        string boton_uno;
        string boton_dos;
        string boton_tres;
    public:
        Botones();
        Botones(string uno,string dos,string tres);
        //la clase tiene getters para la propiedad de composición que adquiere al ser atributo de la clase Figuras
        string get_boton_uno();
        string get_boton_dos();
        string get_boton_tres();

};

Botones::Botones(){
    boton_uno = "";
    boton_dos = "";
    boton_tres = "";
}

Botones::Botones(string uno,string dos,string tres){
    boton_uno = uno;
    boton_dos = dos;
    boton_tres = tres;
}

string Botones::get_boton_uno(){
    return boton_uno;
}

string Botones::get_boton_dos(){
    return boton_dos;
}

string Botones::get_boton_tres(){
    return boton_tres;
}
