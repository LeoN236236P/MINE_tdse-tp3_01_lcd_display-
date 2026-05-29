//=====[Libraries]=============================================================

#include "mbed.h"
#include "user_interface.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    // Inicializa la pantalla
    userInterfaceInit();

    while (true) {
        // Actualiza y refresca los datos del display constantemente
        userInterfaceUpdate();

        // Pequeña pausa de 10 milisegundos para no saturar el procesador
        // y sincronizar con el tiempo de refresco que configuramos antes
        thread_sleep_for(10);
    }
}