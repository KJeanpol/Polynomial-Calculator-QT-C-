#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAddition_clicked(){

    int a,b;
    QString InputStr;
    InputStr=ui->lineEditDisplay->text();
    cout<<InputStr.toStdString()<<endl;

    for(int i=0; i<= InputStr.size(); i++)
    {
        if(InputStr[i].isSpace()){
            cout<<"Es vacio"<<endl;

        }
        if(a==NULL){
            a=InputStr[i].digitValue();
            cout<<"MI valor a es: "<<a<<endl;
        }
        if(b==NULL){
            b=InputStr[2].digitValue();
            cout<<",MI valor b es: "<<b<<endl;
        }
    }



    if(mon1.empty()){

        mon1.push_back(Monomial(a,b,4));
        return;
    }
    if(mon2.empty()){

        mon2.push_back(Monomial(a,b,4));
        return;
    }
    else{

        Polynomial pol1(mon1);
        cout<<pol1<<endl;
        Polynomial pol2(mon2);
        cout<<pol2<<endl;
        Polynomial pol3=pol1+pol2;
        cout<<pol3<<endl;
        mon1.clear();
        mon2.clear();
        return;
        }

       }


void MainWindow::on_btnOne_clicked()
{
    str+="1";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnBlank_clicked()
{
    str+=" ";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnSplit_clicked()
{
    str+="|";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnTwo_clicked()
{
    str+="2";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnThree_clicked()
{
    str+="3";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnFour_clicked()
{
    str+="4";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnFive_clicked()
{
    str+="5";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnSix_clicked()
{
    str+="6";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnSeven_clicked()
{
    str+="7";
    ui->lineEditDisplay->setText(str);
}

void MainWindow::on_btnEight_clicked()
{
    str+="8";
    ui->lineEditDisplay->setText(str);
}


void MainWindow::on_btnNine_clicked()
{
    str+="9";
    ui->lineEditDisplay->setText(str);
}
