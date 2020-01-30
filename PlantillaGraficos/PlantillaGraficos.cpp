// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

void solrayos() {
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.7f, 0.0f);

    glVertex3f(-1.0f, 0.7f, 0.0f);
    glVertex3f(-0.9f, 0.5f, 0.0f);
    glVertex3f(-0.85f, 0.75f, 0.0f);
    glVertex3f(-0.7f, 0.6f, 0.0f);
    glVertex3f(-0.775f, 0.78f, 0.0f);
    glVertex3f(-0.6f, 0.8f, 0.0f);
    glVertex3f(-0.725f, 0.9f, 0.0f);
    glVertex3f(-0.61f, 1.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, 0.0f);

    glEnd();
}

void perilla() {
    glBegin(GL_POLYGON);

    glColor3f(0.3f, 0.2f, 0.1f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.05 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + 0.22f /*posicion en x*/,
                  (0.05 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + -0.55f /*posicion en y*/, 0.0f);
    }

    glEnd();
}

void solbola() {
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.25 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + -1.0f /*posicion en x*/,
                  (0.25 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 1.0f /*posicion en y*/, 0.0f);
    }

    glEnd();
}

void nubes() {
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.15 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + -0.15f /*posicion en x*/,
                  (0.075 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.6f /*posicion en y*/, 0.0f);
    }

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.15 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + -0.05f /*posicion en x*/,
                  (0.075 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.7f /*posicion en y*/, 0.0f);
    }

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.15 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + 0.45f /*posicion en x*/,
            (0.075 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.7f /*posicion en y*/, 0.0f);
    }

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.15 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + 0.55f /*posicion en x*/,
            (0.075 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.8f /*posicion en y*/, 0.0f);
    }

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.15 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + 0.65f /*posicion en x*/,
                  (0.075 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.4f /*posicion en y*/, 0.0f);
    }

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.15 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + 0.75f /*posicion en x*/,
                  (0.075 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.5f /*posicion en y*/, 0.0f);
    }

    glEnd();
}

void hojas() {
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.25 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + -0.6f /*posicion en x*/,
                  (0.25 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + -0.1f /*posicion en y*/, 0.0f);
    }

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.25 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + -0.6f /*posicion en x*/,
            (0.25 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.3f /*posicion en y*/, 0.0f);
    }
    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f);
    for (double i = 0; i < 360.0; i += 5.0) {
        glVertex3f(0.25 /*ancho del circulo*/ * cos(i * 3.14159 / 180.0) + -0.75f /*posicion en x*/,
            (0.25 /*alto del circulo*/ * sin(i * 3.14159 / 180.0)) + 0.1f /*posicion en y*/, 0.0f);
    }
    glEnd();
}

void pasto() {
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.3f, 0.0f);

    glVertex3f(0.05f, -0.9f, 0.0f);
    glVertex3f(0.1f, -0.85f, 0.0f);

    glVertex3f(0.05f, -0.9, 0.0f);
    glVertex3f(0.0f, -0.85f, 0.0f);

    glVertex3f(0.35f, -0.9f, 0.0f);
    glVertex3f(0.4f, -0.85f, 0.0f);

    glVertex3f(0.35f, -0.9, 0.0f);
    glVertex3f(0.3f, -0.85f, 0.0f);

    glEnd();
}

void tronco() {
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(0.5f, 0.3f, 0.1f);

    glVertex3f(-0.85f, -0.1f, 0.0f);
    glVertex3f(-0.85f, -0.8f, 0.0f);
    glVertex3f(-0.6f, -0.1f, 0.0f);
    glVertex3f(-0.6f, -0.8f, 0.0f);

    glEnd();
}

void techo() {
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.3f, 0.3f);
    
    glVertex3f(-0.4f, 0.1f, 0.0f);
    glVertex3f(0.7f, 0.1f, 0.0f);
    glVertex3f(0.15f, 0.5f, 0.0f);

    glEnd();
}
void vidrioventana() {
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 1.0f, 1.0f);
    //vidrio UL
    glVertex3f(0.32f, -0.02f, 0.0f);
    glVertex3f(0.32f, -0.15f, 0.0f);
    glVertex3f(0.40f, -0.15f, 0.0f);

    glVertex3f(0.32f, -0.02f, 0.0f);
    glVertex3f(0.40f, -0.02f, 0.0f);
    glVertex3f(0.40f, -0.15f, 0.0f);
    //vidrio UR
    glVertex3f(0.45f, -0.02f, 0.0f);
    glVertex3f(0.45f, -0.15f, 0.0f);
    glVertex3f(0.53f, -0.15f, 0.0f);

    glVertex3f(0.45f, -0.02f, 0.0f);
    glVertex3f(0.53f, -0.02f, 0.0f);
    glVertex3f(0.53f, -0.15f, 0.0f);
    //vidrio DL
    glVertex3f(0.32f, -0.20f, 0.0f);
    glVertex3f(0.32f, -0.33f, 0.0f);
    glVertex3f(0.40f, -0.33f, 0.0f);

    glVertex3f(0.32f, -0.20f, 0.0f);
    glVertex3f(0.40f, -0.20f, 0.0f);
    glVertex3f(0.40f, -0.33f, 0.0f);
    //vidrio DR
    glVertex3f(0.45f, -0.20f, 0.0f);
    glVertex3f(0.45f, -0.33f, 0.0f);
    glVertex3f(0.53f, -0.33f, 0.0f);

    glVertex3f(0.45f, -0.20f, 0.0f);
    glVertex3f(0.53f, -0.20f, 0.0f);
    glVertex3f(0.53f, -0.33f, 0.0f);

    glEnd();
}

void baseVentana() {
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(0.5f, 0.2f, 0.0f);

    glVertex3f(0.3f, 0.0f, 0.0f);
    glVertex3f(0.3f, -0.35f, 0.0f);
    glVertex3f(0.55f, 0.0f, 0.0f);
    glVertex3f(0.55f, -0.35f, 0.0f);

    glEnd();
}

void puerta() {
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(0.7f, 0.7f, 0.7f);

    glVertex3f(0.0f, -0.4f, 0.0f);
    glVertex3f(0.0f, -0.75f, 0.0f);
    glVertex3f(0.3f, -0.4f, 0.0f);
    glVertex3f(0.3f, -0.75f, 0.0f);

    glEnd();
}

void casa() {
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1.0f, 1.0f, 0.5f);

    glVertex3f(-0.3f, 0.1f, 0.0f);
    glVertex3f(-0.3f, -0.75f, 0.0f);
    glVertex3f(0.6f, 0.1f, 0.0f);
    glVertex3f(0.6f, -0.75f, 0.0f);

    glEnd();
}

void cesped() {
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex3f(-1.0f, -0.6f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -0.6f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);

    glEnd();
}

void dibujarPoligono() {
    glBegin(GL_POLYGON);

    glColor3f(0.4f, 0.4f, 0.9f);

    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);
    glVertex3f(0.2f, -0.4f, 0.0f);
    glVertex3f(0.7f, -0.6f, 0.0f);

    glEnd();
}

void dibujarTrianguloContinuo() {
    glBegin(GL_TRIANGLE_STRIP);

    glColor3f(1.0f, 0.4f, 0.0f);

    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.1f, 0.1f, 0.0f);
    glVertex3f(0.2f, 0.0f, 0.0f);
    
    glColor3f(0.5f, 0.3f, 1.0f);

    glVertex3f(0.2f, 0.15f, 0.0f);

    glEnd();
}

void dibujarLineaContinua() {
    glBegin(GL_LINE_STRIP);

    glColor3f(0.1f, 0.3f, 0.75f);

    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.2f, 0.0f);
    glVertex3f(0.2f, 0.3f, 0.0f);

    glEnd();
}

void dibujarLineas() {
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.4f, 0.6f);

    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.2f, -0.4f, 0.0f);

    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.4f, 0.0f);

    glEnd();
}

void dibujarTriangulos() {
    //establecemos el tipo de primitiva

    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-0.9f, 0.9f, 0.0f);
    glVertex3f(-0.9f, -0.9f, 0.0f);
    glVertex3f(0.9f, 0.9f, 0.0f);

    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.9f, -0.9f, 0.0f);
    glVertex3f(-0.9f, -0.9f, 0.0f);
    glVertex3f(0.9f, 0.9f, 0.0f);

    //establecemos el color
    /*glColor3f(1.0f, 0.0f, 0.0f);
    //enviar vertices
    glVertex3f(0.0f, 0.8f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, -0.5f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.3f, -0.9f, 0.0f);*/

    //especificar que dejamos de dibujar
    glEnd();
}

void dibujar() {
    cesped();
    casa();
    puerta();
    baseVentana();
    vidrioventana();
    techo();
    tronco();
    pasto();
    hojas();
    nubes();
    perilla();
    solrayos();
    solbola();
}

int main()
{
    //declarar una ventana
    GLFWwindow* window;

    //si no se pudo iniciar GLFW terminamos ejecucion
    if (!glfwInit()){
        exit(EXIT_FAILURE);
    }
    //si se pudo iniciar GLFW iniciamos la ventana
    window = glfwCreateWindow(600, 600, "Ventana", NULL, NULL);

    //si no se pudo crear la ventana, terminamos la ejecucion
    if (!window) {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    //establecemos la ventana como contexto
    glfwMakeContextCurrent(window);

    //una vez establecido el contexto se activan las funciiones moderna (gpu)
    glewExperimental = true;

    GLenum errores = glewInit();
    if (errores != GLEW_OK) {
        glewGetErrorString(errores);
    }

    const GLubyte* versionGL = glGetString(GL_VERSION);
    cout << "Version OpenGL: " << versionGL;

    //ciclo de dibujo (Draw Loop)
    while (!glfwWindowShouldClose(window)) {
        //establecer region de dibujo
        glViewport(0, 0, 600, 600);
        //establecemos el color de borrado
        //valores RGBA
        glClearColor(0, 0.8, 1, 1);
        //borrar!
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        //actualizar valores y dibujar
        dibujar();

        glfwPollEvents();

        glfwSwapBuffers(window);
    }
    //despues del ciclo de dibujo eliminemos la venta y procesos de glfw
    glfwDestroyWindow(window);
    glfwTerminate();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
