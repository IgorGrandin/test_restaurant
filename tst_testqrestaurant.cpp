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
    void splitStringText();

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

void TestQRestaurant::splitStringText()
{

}

QTEST_APPLESS_MAIN(TestQRestaurant)

#include "tst_testqrestaurant.moc"
