#ifndef PASSWORD_GENERATOR_H
#define PASSWORD_GENERATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Password_Generator;
}
QT_END_NAMESPACE

class Password_Generator : public QMainWindow
{
    Q_OBJECT

public:
    Password_Generator(QWidget *parent = nullptr);
    ~Password_Generator();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_label_2_linkActivated(const QString &link);

private:
    Ui::Password_Generator *ui;
};
#endif // PASSWORD_GENERATOR_H
