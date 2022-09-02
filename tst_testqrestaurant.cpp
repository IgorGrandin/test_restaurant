#include <QtTest>

// add necessary includes here

class TestQRestaurant : public QObject
{
    Q_OBJECT

public:
    TestQRestaurant();
    ~TestQRestaurant();

private slots:
    void openFile();
    void replaceStringText();
    void timeFromString();

};

TestQRestaurant::TestQRestaurant()
{

}

TestQRestaurant::~TestQRestaurant()
{

}

void TestQRestaurant::openFile()
{
    QFile file("../restaurant_hours/restaurant_hours.csv");
    QCOMPARE(file.open(QIODevice::ReadOnly), true);
}

void TestQRestaurant::replaceStringText()
{
    QString initialString = "Hello World!";
    QString testString = "Hello\n";
    testString.replace("\n", (" World!"));
    QCOMPARE(testString, initialString);
}

void TestQRestaurant::timeFromString()
{
    QString initialTime = "1:20";
    QTime qTime = QTime(1,20);
    QTime strTime = QTime::fromString(initialTime, "H:mm");
    QCOMPARE(strTime, qTime);
}

QTEST_APPLESS_MAIN(TestQRestaurant)

#include "tst_testqrestaurant.moc"
