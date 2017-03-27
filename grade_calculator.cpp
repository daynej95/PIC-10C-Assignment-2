#include "grade_calculator.h"
#include "ui_grade_calculator.h"

double score = 0;

grade_calculator::grade_calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade_calculator)
{
    ui->setupUi(this);
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_9,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_10,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_11,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_12,SIGNAL(valueChanged(int)),
                        this,SLOT(update_overall(int)));
}

grade_calculator::~grade_calculator()
{
    delete ui;
}

void grade_calculator::update_overall(int unused){
    // double score = 31.4;
    score += static_cast<double>(unused);

    ui->lcdNumber->display(QString::number(score));

    return;
}
