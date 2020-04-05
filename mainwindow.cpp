#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



// VARIABLES GLOBALES
double valor1 = 0;
double valor2 = 0;
double suma = 0;
double resta = 0;
double multiplicacion = 0;
double division = 0;
double raiz = 0;
double resultado;
double contador_decimales = 0;
bool suma_presionada = 0;
bool resta_presionada = 0;
bool resultado_inicializado = 0;


// BOTÓN 1
void MainWindow::on_boton1_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 1/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 1/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }

}

// BOTÓN 2
void MainWindow::on_boton2_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 2;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 2;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 2/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 2/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }

}


// BOTÓN 3
void MainWindow::on_boton3_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 3;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 3;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 3/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 3/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }

}


// BOTÓN 4
void MainWindow::on_boton4_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 4;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 4;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 4/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 4/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 5
void MainWindow::on_boton5_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 5;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 5;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 5/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 5/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 6
void MainWindow::on_boton6_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 6;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 6;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 6/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 6/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 7
void MainWindow::on_boton7_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 7;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 7;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 7/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 7/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 8
void MainWindow::on_boton8_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 8;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 8;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 8/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 8/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 9
void MainWindow::on_boton9_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10 + 9;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 9;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 + 9/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 9/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 0
void MainWindow::on_boton0_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0){
            valor1 = valor1 * 10;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10;
            ui -> pantalla -> display(valor2);
        }
    } else {
        contador_decimales = contador_decimales * 10;
    }
}


// BOTÓN DECIMAL
void MainWindow::on_boton_coma_clicked()
{
    contador_decimales = 10;
}




