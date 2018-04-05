#ifndef LOGGER_H
#define LOGGER_H

#include <QMainWindow>

namespace Ui {
class Logger;
}

class Logger : public QMainWindow
{
    Q_OBJECT

public:
    explicit Logger(QWidget *parent = 0);
    ~Logger();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Logger *ui;
};

#endif // LOGGER_H
