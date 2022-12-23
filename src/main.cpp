#include <iostream>
#include <fstream>
#include <sstream>

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

    const int countOfTissueForLimb = 20;
    const int countOfLimbForSystem = 100;
    const int countOfTissueForSystem = countOfTissueForLimb * countOfLimbForSystem;

    ifstream verilerFile;
    verilerFile.open("DATAs.txt");
    string line;
    int countOfTissue = 0;
    while (getline(verilerFile, line))
    {
        countOfTissue++;
    }
    verilerFile.close();

    cout << "Count of Tissue : " << countOfTissue << endl;
    const int countOfSystem = countOfTissue / countOfTissueForSystem;
    cout << "Count of System : " << countOfSystem << endl;
    const int countOfLimb = countOfTissue / countOfTissueForLimb;
    cout << "Count of Limb : " << countOfLimb << endl;

    Tissue *tissues = new Tissue[countOfTissue];
    Limb *limbs = new Limb[countOfLimb];
    System *systemss = new System[countOfSystem];

    int indexTissue = 0;
    int indexLimbs = 0;
    int indexSystems = 0;

    verilerFile.open("DATAs.txt");
    while (getline(verilerFile, line))
    {
        stringstream s(line);
        stringstream finderCountOfCells(line);
        string numberChar;

        int sizeTissue = 0;
        while (finderCountOfCells >> numberChar)
        {
            sizeTissue++;
        }
        //   cout << "Size : " << sizeTissue << endl;

        tissues[indexTissue].setSize(sizeTissue);

        while (s >> numberChar)
        {
            int number = stoi(numberChar);
            Cell *tempCell = new Cell(number);
            tissues[indexTissue].add(*tempCell);
        }
        //   cout << endl;

        RadixSort::sort(tissues[indexTissue].getCells(), tissues[indexTissue].getSize());
        //    tissues[indexTissue].printMiddleValue();

        indexTissue++;
        //     cout << "Count of Tissue: " << indexTissue << endl;
    }
    verilerFile.close();

    for (int i = 0; i < countOfLimb; i++)
    {
        for (int j = 0; j < countOfTissueForLimb; j++)
        {
            if (((i * countOfTissueForLimb) + j) > countOfTissue)
            {
                break;
            }
            //     cout << (i * countOfTissueForLimb) + j << endl;
            //     tissues[(i * countOfTissueForLimb) + j].print();
            limbs[i].insertTissue(&tissues[(i * countOfTissueForLimb) + j]);
        }
    }

    for (int i = 0; i < countOfLimb; i++)
    {
        //    limbs[i].printInorder();
    }
    cout << "Veriler Organa Basari ile eklendi !!!" << endl;
    cout << "Sira sisteme eklemede !!!" << endl;

    for (int i = 0; i < countOfSystem; i++)
    {
        for (int j = 0; j < countOfLimbForSystem; j++)
        {
            if (((i * countOfLimbForSystem) + j) > countOfLimb)
            {
                break;
            }
            //     cout << (i * countOfTissueForLimb) + j << endl;
            //     tissues[(i * countOfTissueForLimb) + j].print();
            systemss[i].addLimb(&limbs[(i * countOfLimbForSystem) + j]);
            //   limbs[i].insertTissue(&tissues[(i * countOfTissueForLimb) + j]);
        }
    }

    for (int i = 0; i < countOfSystem; i++)
    {
        systemss[i].print();
    }
    cout << "Veriler Sistem Sinifina Basari ile eklendi !!!" << endl;

    // 0 * 20 + 0 = 0

    // 0 * 20 + 2 = 2

    // 0 * 20 + 10 = 10

    // 1 * 20 + 4 = 24

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
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
    cout << "Ortanca Degerler:" << endl;
    for (int i = 0; i < tissueCount; i++)
    {
        cout << tissue[i].getMiddleValue() << endl;
    }
    cout << endl;

    BinarySearchTree *bst = new BinarySearchTree();
    for (int i = 0; i < tissueCount; i++)
    {
        bst->insert(&tissue[i]);
    }
    cout << endl;

    cout << "Bos mu : " << bst->isEmpty() << endl;
    cout << "Kok : " << bst->getRoot() << endl;

    cout << "Deger : " << bst->getRoot()->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->left->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->right->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->right->right->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->right->left->getTissue()->getMiddleValue() << endl;
    //        231
    //   -        456
    // -   -  353     2341
    //      -    -   2261 2931

    cout << "Function : " << endl;
    bst->print(POST);

    cout << "Limb: " << endl;
    Limb *myLimb = new Limb;
    myLimb->insertTissue(&tissue[0]); // insert t1 into the tree
    myLimb->insertTissue(&tissue[1]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[2]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[3]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[4]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[5]); // insert t2 into the tree

    myLimb->printInorder(); // print the tree in inorder traversal

    cout << endl;
    cout << "System : " << endl;
    System *mySystem = new System();
    mySystem->addLimb(myLimb);
    mySystem->addLimb(myLimb);

    mySystem->print();

    return 0;
}

//      231
//    353   456
//              2341
//            2261  2941
//

/*
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
    cout << "Ortanca Degerler:" << endl;
    for (int i = 0; i < tissueCount; i++)
    {
        cout << tissue[i].getMiddleValue() << endl;
    }
    cout << endl;

    BinarySearchTree *bst = new BinarySearchTree();
    for (int i = 0; i < tissueCount; i++)
    {
        bst->insert(&tissue[i]);
    }
    cout << endl;

    cout << "Bos mu : " << bst->isEmpty() << endl;
    cout << "Kok : " << bst->getRoot() << endl;

    cout << "Deger : " << bst->getRoot()->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->left->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->right->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->right->right->getTissue()->getMiddleValue() << endl;
    cout << "Deger : " << bst->getRoot()->right->right->left->getTissue()->getMiddleValue() << endl;
    //        231
    //   -        456
    // -   -  353     2341
    //      -    -   2261 2931

    cout << "Function : " << endl;
    bst->print(POST);

    cout << "Limb: " << endl;
    Limb *myLimb = new Limb;
    myLimb->insertTissue(&tissue[0]); // insert t1 into the tree
    myLimb->insertTissue(&tissue[1]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[2]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[3]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[4]); // insert t2 into the tree
    myLimb->insertTissue(&tissue[5]); // insert t2 into the tree

    myLimb->printInorder(); // print the tree in inorder traversal

    cout << endl;
    cout << "System : " << endl;
    System *mySystem = new System();
    mySystem->addLimb(myLimb);
    mySystem->addLimb(myLimb);

    mySystem->print();
*/