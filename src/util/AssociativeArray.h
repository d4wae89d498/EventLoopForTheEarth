//
// Created by marc on 29/12/18.
//

#include <iostream>
#include <vector>
using namespace std;

namespace ipolitic {
    template <class T>
    class AssociativeArray
    {
    private:
        typedef struct _Data
        {
            T data;
            string name;
        } Data ;
        vector<Data> stack;
    public:
        long Size();

        bool IsItem(string name);

        bool AddItem(string name, T data);

        T& operator [] (string name);

        string GetItemName(long index);

        T& operator [] (long index);

    };
}
