#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>


namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
     ~MainWindow();

    private slots:
        void on_actionNew_triggered();

        void on_actionOpen_triggered();

private:
        Ui::MainWindow *ui;
        QString currentFile = "";
};

#endif // MAINWINDOW_H
