#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QColor>

class ColorButtonApp : public QWidget {
    Q_OBJECT

public:
    ColorButtonApp(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Realistic Colored Buttons App");
        setFixedSize(400, 500);
        setStyleSheet("background-color: lightgray;");

        QVBoxLayout *mainLayout = new QVBoxLayout(this);

        // Title label
        QLabel *titleLabel = new QLabel("Click a button to see its color!");
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setStyleSheet("font-size: 18px; font-weight: bold; color: darkblue; margin: 10px;");
        mainLayout->addWidget(titleLabel);

        // Status label
        statusLabel = new QLabel("No button clicked yet.");
        statusLabel->setAlignment(Qt::AlignCenter);
        statusLabel->setStyleSheet("font-size: 14px; color: black; margin: 5px;");
        mainLayout->addWidget(statusLabel);

        // Buttons layout
        QVBoxLayout *buttonLayout = new QVBoxLayout();

        redButton = new QPushButton("Red Button");
        redButton->setStyleSheet("QPushButton { background-color: red; color: white; font-size: 16px; padding: 15px; border-radius: 10px; }"
                                  "QPushButton:hover { background-color: darkred; }");
        buttonLayout->addWidget(redButton);
        connect(redButton, &QPushButton::clicked, this, &ColorButtonApp::onRedClicked);

        greenButton = new QPushButton("Green Button");
        greenButton->setStyleSheet("QPushButton { background-color: green; color: white; font-size: 16px; padding: 15px; border-radius: 10px; }"
                                    "QPushButton:hover { background-color: darkgreen; }");
        buttonLayout->addWidget(greenButton);
        connect(greenButton, &QPushButton::clicked, this, &ColorButtonApp::onGreenClicked);

        blueButton = new QPushButton("Blue Button");
        blueButton->setStyleSheet("QPushButton { background-color: blue; color: white; font-size: 16px; padding: 15px; border-radius: 10px; }"
                                   "QPushButton:hover { background-color: darkblue; }");
        buttonLayout->addWidget(blueButton);
        connect(blueButton, &QPushButton::clicked, this, &ColorButtonApp::onBlueClicked);

        yellowButton = new QPushButton("Yellow Button");
        yellowButton->setStyleSheet("QPushButton { background-color: yellow; color: black; font-size: 16px; padding: 15px; border-radius: 10px; }"
                                     "QPushButton:hover { background-color: orange; }");
        buttonLayout->addWidget(yellowButton);
        connect(yellowButton, &QPushButton::clicked, this, &ColorButtonApp::onYellowClicked);

        purpleButton = new QPushButton("Purple Button");
        purpleButton->setStyleSheet("QPushButton { background-color: purple; color: white; font-size: 16px; padding: 15px; border-radius: 10px; }"
                                     "QPushButton:hover { background-color: darkmagenta; }");
        buttonLayout->addWidget(purpleButton);
        connect(purpleButton, &QPushButton::clicked, this, &ColorButtonApp::onPurpleClicked);

        mainLayout->addLayout(buttonLayout);

        // Reset button
        resetButton = new QPushButton("Reset Background");
        resetButton->setStyleSheet("QPushButton { background-color: gray; color: white; font-size: 14px; padding: 10px; border-radius: 5px; }"
                                    "QPushButton:hover { background-color: darkgray; }");
        mainLayout->addWidget(resetButton);
        connect(resetButton, &QPushButton::clicked, this, &ColorButtonApp::onResetClicked);

        setLayout(mainLayout);
    }

private slots:
    void onRedClicked() {
        statusLabel->setText("You clicked the Red Button!");
        setStyleSheet("background-color: lightcoral;");
        QMessageBox::information(this, "Color Info", "Red is the color of passion and energy!");
    }

    void onGreenClicked() {
        statusLabel->setText("You clicked the Green Button!");
        setStyleSheet("background-color: lightgreen;");
        QMessageBox::information(this, "Color Info", "Green represents nature and growth!");
    }

    void onBlueClicked() {
        statusLabel->setText("You clicked the Blue Button!");
        setStyleSheet("background-color: lightblue;");
        QMessageBox::information(this, "Color Info", "Blue symbolizes trust and calmness!");
    }

    void onYellowClicked() {
        statusLabel->setText("You clicked the Yellow Button!");
        setStyleSheet("background-color: lightyellow;");
        QMessageBox::information(this, "Color Info", "Yellow stands for happiness and optimism!");
    }

    void onPurpleClicked() {
        statusLabel->setText("You clicked the Purple Button!");
        setStyleSheet("background-color: lavender;");
        QMessageBox::information(this, "Color Info", "Purple signifies creativity and luxury!");
    }

    void onResetClicked() {
        statusLabel->setText("Background reset to default.");
        setStyleSheet("background-color: lightgray;");
    }

private:
    QLabel *statusLabel;
    QPushButton *redButton;
    QPushButton *greenButton;
    QPushButton *blueButton;
    QPushButton *yellowButton;
    QPushButton *purpleButton;
    QPushButton *resetButton;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    ColorButtonApp window;
    window.show();

    return app.exec();
}

#include "main.moc"