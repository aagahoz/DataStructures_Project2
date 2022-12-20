#include <iostream>

#include "BinarySearchTreeClass.hpp"
#include "CellClass.hpp"
#include "LimbClass.hpp"
#include "SystemClass.hpp"
#include "TissueClass.hpp"
#include "OrganismClass.hpp"
#include "ControlClass.hpp"
#include "RadixClass.hpp"
#include "QueueClass.hpp"
#include "generalFunctions.hpp"

#include <iostream>

using namespace std;

int main()
{
    Tissue *tissue = new Tissue[10];

    Cell cell1(221);
    Cell cell2(33);
    Cell cell3(46);
    Cell cell4(51);
    Cell cell5(291);
    Cell cell6(261);
    Cell cell7(251);
    Cell cell8(231);
    Cell cell9(231);
    Cell cell10(121);

    tissue[0].setSize(10);

    tissue[0].add(cell1);
    tissue[0].add(cell2);
    tissue[0].add(cell3);
    tissue[0].add(cell4);
    tissue[0].add(cell5);
    tissue[0].add(cell6);
    tissue[0].add(cell7);
    tissue[0].add(cell8);
    tissue[0].add(cell9);
    tissue[0].add(cell10);

    //    tissue1->print();

    cout << "Cells address: " << tissue[0].getCells() << "   ::     ";

    // tissue yani bir satir, satir verileri radix sort ile sıralanacak

    int n = 10;
    RadixSort::sort(tissue[0].getCells(), 10);

    for (int i = 0; i < 10; i++)
    {
        cout << tissue[0].getCells()[i].getDNA() << " ";
    }
    cout << "               ::      ";

    int ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << "   ::      ";
    cout << "Deger : " << getMiddleValueArray(tissue[0].getCells(), getMiddleValueIndex(tissue[0].getCells(), n)) << endl;

    Cell cell11(221);
    Cell cell12(63);
    Cell cell13(456);
    Cell cell14(561);
    Cell cell15(2931);
    Cell cell16(2621);
    Cell cell17(241);
    Cell cell18(21);
    Cell cell19(2361);
    Cell cell20(5);

    tissue[1].setSize(10);

    tissue[1].add(cell11);
    tissue[1].add(cell12);
    tissue[1].add(cell13);
    tissue[1].add(cell14);
    tissue[1].add(cell15);
    tissue[1].add(cell16);
    tissue[1].add(cell17);
    tissue[1].add(cell18);
    tissue[1].add(cell19);
    tissue[1].add(cell20);

    //    tissue1->print();

    cout << "Cells address: " << tissue[1].getCells() << "   ::     ";

    // tissue yani bir satir, satir verileri radix sort ile sıralanacak

    n = 10;
    RadixSort::sort(tissue[1].getCells(), 10);

    for (int i = 0; i < 10; i++)
    {
        cout << tissue[1].getCells()[i].getDNA() << " ";
    }
    cout << "             ::      ";

    ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << "   ::      ";
    cout << "Deger : " << getMiddleValueArray(tissue[1].getCells(), getMiddleValueIndex(tissue[1].getCells(), n)) << endl;

    Cell cell31(22661);
    Cell cell32(3553);
    Cell cell33(436);
    Cell cell34(521);
    Cell cell35(29441);
    Cell cell36(261);
    Cell cell37(2551);
    Cell cell38(2331);
    Cell cell39(2341);
    Cell cell40(1251);

    tissue[2].setSize(10);

    tissue[2].add(cell31);
    tissue[2].add(cell32);
    tissue[2].add(cell33);
    tissue[2].add(cell34);
    tissue[2].add(cell35);
    tissue[2].add(cell36);
    tissue[2].add(cell37);
    tissue[2].add(cell38);
    tissue[2].add(cell39);
    tissue[2].add(cell40);

    //    tissue1->print();

    cout << "Cells address: " << tissue[2].getCells() << "   ::     ";

    // tissue yani bir satir, satir verileri radix sort ile sıralanacak

    n = 10;
    RadixSort::sort(tissue[2].getCells(), 10);

    for (int i = 0; i < 10; i++)
    {
        cout << tissue[2].getCells()[i].getDNA() << " ";
    }
    cout << "   ::      ";

    ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << "   ::      ";
    cout << "Deger : " << getMiddleValueArray(tissue[2].getCells(), getMiddleValueIndex(tissue[2].getCells(), n)) << endl;

    Cell cell41(6261);
    Cell cell42(353);
    Cell cell43(4386);
    Cell cell44(521);
    Cell cell45(2941);
    Cell cell46(6261);
    Cell cell47(251);
    Cell cell48(2931);
    Cell cell49(2541);
    Cell cell50(1251);

    tissue[3].setSize(10);

    tissue[3].add(cell41);
    tissue[3].add(cell42);
    tissue[3].add(cell43);
    tissue[3].add(cell44);
    tissue[3].add(cell45);
    tissue[3].add(cell46);
    tissue[3].add(cell47);
    tissue[3].add(cell48);
    tissue[3].add(cell49);
    tissue[3].add(cell50);

    //    tissue1->print();

    cout << "Cells address: " << tissue[3].getCells() << "   ::     ";

    // tissue yani bir satir, satir verileri radix sort ile sıralanacak

    n = 10;
    RadixSort::sort(tissue[3].getCells(), 10);

    for (int i = 0; i < 10; i++)
    {
        cout << tissue[3].getCells()[i].getDNA() << " ";
    }
    cout << "   ::      ";

    ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << "   ::      ";
    cout << "Deger : " << getMiddleValueArray(tissue[3].getCells(), getMiddleValueIndex(tissue[3].getCells(), n)) << endl;

    Cell cell51(2261);
    Cell cell52(353);
    Cell cell53(4326);
    Cell cell54(5321);
    Cell cell55(2441);
    Cell cell56(2641);
    Cell cell57(251);
    Cell cell58(231);
    Cell cell59(241);
    Cell cell60(1251);

    tissue[4].setSize(10);

    tissue[4].add(cell51);
    tissue[4].add(cell52);
    tissue[4].add(cell53);
    tissue[4].add(cell54);
    tissue[4].add(cell55);
    tissue[4].add(cell56);
    tissue[4].add(cell57);
    tissue[4].add(cell58);
    tissue[4].add(cell59);
    tissue[4].add(cell60);

    //    tissue1->print();
    cout << "Cells address: " << tissue[4].getCells() << "   ::     ";

    // tissue yani bir satir, satir verileri radix sort ile sıralanacak

    n = 10;
    RadixSort::sort(tissue[4].getCells(), 10);

    for (int i = 0; i < 10; i++)
    {
        cout << tissue[4].getCells()[i].getDNA() << " ";
    }
    cout << "   ::      ";

    ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << "   ::      ";
    cout << "Deger : " << getMiddleValueArray(tissue[4].getCells(), getMiddleValueIndex(tissue[4].getCells(), n)) << endl;

    Cell cell61(661);
    Cell cell62(353);
    Cell cell63(4346);
    Cell cell64(521);
    Cell cell65(2941);
    Cell cell66(261);
    Cell cell67(255);
    Cell cell68(231);
    Cell cell69(231);
    Cell cell70(251);

    tissue[5].setSize(10);

    tissue[5].add(cell61);
    tissue[5].add(cell62);
    tissue[5].add(cell63);
    tissue[5].add(cell64);
    tissue[5].add(cell65);
    tissue[5].add(cell66);
    tissue[5].add(cell67);
    tissue[5].add(cell68);
    tissue[5].add(cell69);
    tissue[5].add(cell70);

    //    tissue1->print();

    cout << "Cells address: " << tissue[5].getCells() << "   ::     ";

    // tissue yani bir satir, satir verileri radix sort ile sıralanacak

    n = 10;
    RadixSort::sort(tissue[5].getCells(), 10);

    for (int i = 0; i < 10; i++)
    {
        cout << tissue[5].getCells()[i].getDNA() << " ";
    }
    cout << "          ::      ";

    ortaDeger = n / 2;
    cout << "Orta Deger : " << ortaDeger << "   ::      ";
    cout << "Deger : " << getMiddleValueArray(tissue[5].getCells(), getMiddleValueIndex(tissue[5].getCells(), n)) << endl;

    int tissueCount = 6;
    cout << "Ortanca Degerler";
    for (int i = 0; i < tissueCount; i++)
    {
        cout << " : " << getMiddleValueArray(tissue[i].getCells(), getMiddleValueIndex(tissue[i].getCells(), tissue[i].getSize())) << "    ";
    }
    cout << endl;

    
    BinarySearchTree *bst = new BinarySearchTree();
    for (int i = 0; i < tissueCount; i++)
    {

        getMiddleValueArray(tissue[i].getCells(), getMiddleValueIndex(tissue[i].getCells(), tissue[i].getSize()));
    }
    cout << endl;
    


    return 0;
}