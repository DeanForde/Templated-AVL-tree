//
//  main.cpp
//  AvlTree
//
//  Created by Eski on 20/09/2018.
//  Copyright © 2018 Eski. All rights reserved.
//
#include <iostream>
#include "TreeType.h"
using namespace std;

TreeType<string>tree;

int main(int argc, const char * argv[]) {
    
    int option;
    do
    {
        cout << "\t1. Insert into an AVL Tree\n";
        cout << "\t2. Print the contents of the AVL tree\n";
        cout << "\t3. Exit\n";
        cout << "\t\tEnter option : ";
        cin >> option;
        
        switch (option)
        {
            case 1:
                //Insert
                tree.InsertItem("dean");
                tree.InsertItem("joe");
                tree.InsertItem("jaso");
                tree.InsertItem("sean");
                break;
            case 2:
                tree.Print();
                break;
        }
    } while (option < 3);
    return 0;
}
