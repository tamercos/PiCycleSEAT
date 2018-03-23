#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "libSonar.h"
#include <QBoxLayout>
#include <QWidget>
#include <QScrollBar>
#include <QCheckBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();

    ~MainWindow();

    Sonar sonar;

void timerEvent( QTimerEvent * );

public slots:

    void setVibInput1(bool vibInput1);
    void setVibInput2(bool vibInput2);
    void setVibInput3(bool vibInput3);
    void setDetectRange(int detectRange);

private:

    //***Decleration of wiringPi pin connections***
        int trigger1 = 0;
        int echo1 = 2;
        int vibDisc1 = 3;

        int trigger2 = 23;
        int echo2 = 24;
        int vibDisc2 = 25;

        int trigger3 = 27;
        int echo3 = 28;
        int vibDisc3 = 29;

    QCheckBox *button1;
    QCheckBox *button2;
    QCheckBox *button3;
    QScrollBar *scrollbar;

    // layout elements from Qt itself http://qt-project.org/doc/qt-4.8/classes.html
    QVBoxLayout  *vLayout;  // vertical layout
    QHBoxLayout  *hLayout;  // horizontal layout

    int detectRange;
    bool vibInput1;
    bool vibInput2;
    bool vibInput3;
};

#endif // MAINWINDOW_H
