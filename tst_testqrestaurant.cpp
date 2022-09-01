#include <QtTest>

// add necessary includes here

class TestQRestaurant : public QObject
{
    Q_OBJECT

public:
    TestQRestaurant();
    ~TestQRestaurant();

private slots:
    void test_case1();

};

TestQRestaurant::TestQRestaurant()
{

}

TestQRestaurant::~TestQRestaurant()
{

}

void TestQRestaurant::test_case1()
{

}

QTEST_APPLESS_MAIN(TestQRestaurant)

#include "tst_testqrestaurant.moc"
