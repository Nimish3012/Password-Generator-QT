#include "password_generator.h"
#include "./ui_password_generator.h"
#include <QDesktopServices>

#include<string>
using namespace std;

Password_Generator::Password_Generator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Password_Generator)
{
    ui->setupUi(this);

    ui->label_2->setText("<a href=\"http://www.linkedin.com/in/nimish-sahu-a611a1224\">©NIMISH_SAHU</a>");
    ui->label_2->setOpenExternalLinks(true);
}

Password_Generator::~Password_Generator()
{
    delete ui;
}

void Password_Generator::on_pushButton_3_clicked()
{
    string charset {""} , output{""};

    if(ui->checkBox_5->isChecked())
    {
        if (ui->lineEdit->text().isEmpty())
            ui->plainTextEdit->appendPlainText("Enter Custom Text! ");

        charset=ui->lineEdit->text().toStdString();
    }

    else
    {
        if(ui->checkBox ->isChecked())
            charset+="0123456789";
        if(ui->checkBox_2 ->isChecked())
            charset+="!@#$%^&*-+=[]{}',./<>\\|?";
        if(ui->checkBox_3 ->isChecked())
            charset+="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        if(ui->checkBox_4 ->isChecked())
            charset+="abcdefghijklmnopqrstuvwxyz";


        // else
        // {
        //     ui->plainTextEdit->appendPlainText("Please Select A CheckBox");
        // }
    }


    if(charset!="")
    {
        for(int i=0; i<ui->spinBox->value(); i++)
        {
            output+=charset.at(rand()%(int)charset.length());
        }
        ui->plainTextEdit->appendPlainText(output.c_str());
    }
    else
    {
        if(ui->spinBox->value()==0)
        {
            ui->plainTextEdit->appendPlainText("Select A Length! ");
        }
        else if(!( ui->checkBox_5->isChecked()))
        {
            ui->plainTextEdit->appendPlainText("Select A CheckBox! ");
        }
    }

}


void Password_Generator::on_pushButton_clicked()
{
    ui->plainTextEdit->clear();
}


void Password_Generator::on_pushButton_2_clicked()
{
    ui->plainTextEdit->clear();
    ui->spinBox->setValue(0);
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);

}

void Password_Generator::on_label_2_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl(link));
}

