# Juego-Infantil


# Funcionamiento del programa
El usuario tiene la opción de jugar 3 categorías con 3 preguntas cada una. Las categorías son:

 a)Introducción a las figuras
 b)El nombre de las figuras
 c)El color de las figuras

El usuario deberá de introducir letra de la categoría que desea jugar en la consola. Luego, se deben de responder las 3 preguntas de opción múltiple, igualmente introduciendo la letra de la respuesta correcta en la consola. Después de cada pregunta, a excepción de la final, el usuario deberá de escribir la letra c para continuar jugando.

# Descripción del UML
Composición: la clase Figura contiene a la clase Botones como atributo porque los botones son un atributo complejo. En la clase Botones se define que cada objeto tendrá tres botones (atributos) y en la clase Figuras se les da la capacidad de ser dibujados (dibujar_botones()) a través de la librería miniwin.
Hererencia: la case Figura hereda sus atributos y funciones a las clases Tres_menos, Cuatro_lados y Cuatro_mas porque cada una de estas clases hijas son figuras pero con diferentes características. Las clases hija contienen diferentes funciones para dibujar figuras que corresponden a su clasificación.

