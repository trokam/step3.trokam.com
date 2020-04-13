#ifndef MAINLOCAL_H
#define MAINLOCAL_H

#include <QMainWindow>

namespace Ui {
class MainLocal;
}

class MainLocal : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainLocal(QWidget *parent = 0);
        ~MainLocal();

    private slots:
        void on_searchButton_clicked();

    private:
        Ui::MainLocal *ui;
        void loadTextFile();
};

#endif // MAINLOCAL_H
