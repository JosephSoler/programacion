#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h> // Solo para Windows, si estás en otro sistema, puedes usar alternativas.
#include <thread>   // Agrega esta línea para <chrono>

int main() {
    std::system("cls"); // Limpia la pantalla (solo para Windows).

    std::string mensaje = "¡Hola, esta es una interfaz gráfica simple en C++!";
    int x = 10, y = 5; // Posición en la pantalla.

    while (true) {
        std::system("cls"); // Limpia la pantalla (solo para Windows).

        // Imprime el mensaje en la posición (x, y).
        for (int i = 0; i < y; ++i)
            std::cout << std::endl;
        for (int i = 0; i < x; ++i)
            std::cout << " ";
        std::cout << mensaje << std::endl;

        // Detecta si se presiona la tecla 'q' para salir.
        if (_kbhit()) {
            char tecla = _getch();
            if (tecla == 'q')
                break;
        }

        // Cambia la posición para mover el mensaje en la siguiente iteración.
        x += 2;
        if (x >= 80) // Reinicia la posición al llegar al final de la pantalla (solo para Windows).
            x = 10;

        // Espera un corto período antes de la siguiente actualización.
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}


