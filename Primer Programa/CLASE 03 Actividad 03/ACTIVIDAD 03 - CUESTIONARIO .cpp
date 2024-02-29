#include <iostream>

using namespace std;

int main() {
    int score = 0;

    // Pregunta 1  
    cout << "1.¿Cuantos hijos tuvo Valentina Vassilyeva?\n";
    cout << "a) 32\n"; 
    cout << "b) 69\n";
    cout << "c) 16\n";
    cout << "d) 20\n";
    char respuesta1;
    cin >> respuesta1;
    if (respuesta1 == 'b' || respuesta1 == 'B') {
        cout << "¡Correcto! 69.\n";
        score++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es 69.\n";
    }
    cout << "\n";

   //pregunta 2
    cout << "2.¿Cuál es el árbol más grande del mundo?";
    cout << "a) Yggdrasil\n";
    cout << "b) ahuehuete\n"; 
    cout << "c) Jaya Sri Maha Bodhi\n"; 
    cout << "d) Hyperion\n";
    char respuesta2;
    cin >> respuesta2;
    if (respuesta2 == 'd' || respuesta2 == 'D') {
        cout << "¡Correcto! Hyperion.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es Hyperion.\n";
    }
    cout << "\n";

  //pregunta 3
    cout << "3.¿Que son los pitones de del toro?"; 
    cout << "a) son las puntas de los cuernos en el toro cuando es becerro";
    cout << "b) son los genitales del toro";
    cout << "c) son los pelos de la cola del toro";
    cout << "d) son las barbas del toro";
    char respuesta3;
    cin >> respuesta3;
    if (respuesta3 == 'a' || respuesta3 == 'A') {
        cout << "¡Correcto! son las puntas de los cuernos en el toro cuando es becerro.\n";
    } else{
	    cout << "Respuesta incorrecta. la respuesta correcta es son las puntas de los cuernos en el toro cuan es becerro.\n";
    }
    cout << "\n";

     //pregunta 4 
    cout << "4.¿En donde se originaron las grandes unidades de medida del tiempo?";
    cout << "a) Egipto\n";
    cout << "b) Anáhuacs\n";
    cout << "c) Grecia\n";
    cout << "d) Macedonia\n";
    char respuesta4;
    cin >> respuesta4;
    if (respuesta4 == 'a' || respuesta4 == 'A') {
        cout << "¡Correcto! Egipto.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es Egipto.\n";
    }
    cout << "\n";

    //pregunta 5
    cout << "5.¿Quien es el autor del Caballo de Toya?";
    cout << "a)Juan Jose Benitez Lopez";
    cout << "b)Bruno Traven";
    cout << "c)Roald Dahl";
    cout << "d)Juan Rulfo";
    char respuesta5;
    cin >> respuesta5;
    if (respuesta5 == 'a' || respuesta5 == 'A') {
        cout << "¡Correcto! Juan Jose Benitez Lopez.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es Juan Jose Benitez Lopez.\n";
    }
    cout << "\n";

    //pregunta 6
    cout <<"6.¿Quien es considerado el padre de la medicina?"; 
    cout << "a) Patch Adams";
    cout << "b) Lucy Candib";
    cout << "c) Atai Omoruto"; 
    cout << "d) Hipocrates de Cos";
    char respuesta6;
    cin >> respuesta6;
    if (respuesta6 == 'd' || respuesta6 == 'D') {
        cout << "¡Correcto! Hipocrates de Cos.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es Hipocrates de Cos.\n";
    }
    cout << "\n";

   //pregunta 7
    cout << "7.¿Quién es el Padre del Universo?";
    cout << "a) Georges Lemaître\n";
    cout << "b) hipatia de Alejandría\n";
    cout << "C) Richard Tolman\n";
    cout << "d) Vicente Huidobro\n";
    char respuesta7;
    cin >> respuesta7;
    if (respuesta7 == 'd' || respuesta7 == 'D') {
        cout << "¡Correcto! Georges Lemaître.\n";
    } else {
        cout << "Respuesta incorrecta. la respuesta correcta es Georges Lemaître.\n";
    }
    cout << "\n";

   //pregunta 8
    cout << "8.¿Cual es el Hueso mas pequeño del Cuerpo Humano?";
    cout << "a) El coxis";
    cout << "b) El Martillo";
    cout << "c) El Estribo"; 
    cout << "d) La cuchufleta";
    char respuesta8;
    cin >> respuesta8;
    if (respuesta8 == 'c' || respuesta8 == 'C') {
        cout << "¡Correcto! El Estribo.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es El Estribo.\n";
    }
    cout << "\n";
    
   //pregunta 9
    cout << "¿9.Cuál es considerada la creación más famosa de Da Vinci?";
    cout << "a) La Monaliza\n";
    cout << "b) El Hombre de Vitrubio\n";
    cout << "c) La ultima cena\n";
    cout << "d) Salva tor Mundi\n";
    char respuesta9;
    cin >> respuesta9;
    if (respuesta9 == 'b' || respuesta9 == 'B') {
        cout << "¡Correcto! El Hombre Vitrubio.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es El Hombre Vitrubio.\n";
    }
    cout << "\n";

   //pregunta 10
    cout << "10.¿A quien se le considera como el gran conquistador?";
    cout << "a) Hernan cortez\n";
    cout << "b) Napoleon Bonaparte\n";
    cout << "c) Alejandro Magno\n";
    cout << "d) Adolf Hitler\n";
    char respuesta10;
    cin >> respuesta10;
    if (respuesta10 == 'c' || respuesta10 == 'C') {
        cout << "¡Correcto! Alejandro Magno.\n";
    } else{
        cout << "Respuesta incorrecta. la respuesta correcta es Alejandro Magno.\n";
    }
    cout << "\n";

    // Mostrar Puntaje Final
    cout << "Tu puntaje Final es: " << score << " de 10.\n";

    return 0;

    
