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
int contador_decimales = 0;
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
    if (suma_presionada == 0 && resta_presionada == 0){
        valor1 = valor1 * 10 + 2;
        ui -> pantalla -> display(valor1);
    }
    else {
        valor2 = valor2 * 10 + 2;
        ui -> pantalla -> display(valor2);
    }
}


// BOTÓN 3
void MainWindow::on_boton3_clicked()
{
    if (suma_presionada == 0 && resta_presionada == 0){
        valor1 = valor1 * 10 + 3;
        ui -> pantalla -> display(valor1);
    }
    else {
        valor2 = valor2 * 10 + 3;
        ui -> pantalla -> display(valor2);
    }
}


// BOTÓN SUMA
void MainWindow::on_boton_suma_clicked()
{
    suma_presionada = 1;
    resta_presionada = 0;
    contador_decimales = 0;
}


// BOTÓN RESTA
void MainWindow::on_boton_resta_clicked()
{
    suma_presionada = 0;
    resta_presionada = 1;
    contador_decimales = 0;
}

// BOTÓN IGUAL
void MainWindow::on_boton_igual_clicked()
{

    // SUMA
    if (suma_presionada == 1){
        if (valor1 != NULL){
            suma = valor1 + valor2;
        } else {
            suma = resultado + valor2;

        }
        ui -> pantalla -> display(suma);
        resultado = ui -> pantalla -> value();
        suma_presionada = 0;
        contador_decimales = 0;
        valor1 = NULL;
        valor2 = 0;
    }


    // RESTA
    if (resta_presionada == 1){
        if (valor1 != NULL){
            suma = valor1 - valor2;
        } else {
            suma = resultado - valor2;

        }
        ui -> pantalla -> display(suma);
        resultado = ui -> pantalla -> value();
        resta_presionada = 0;
        valor1 = NULL;
        valor2 = 0;
    }

}


// BOTÓN DECIMAL
void MainWindow::on_boton_coma_clicked()
{
    contador_decimales = 10;
     ui -> pantalla -> smallDecimalPoint();
    ui -> pantalla -> setSmallDecimalPoint(true);
}
