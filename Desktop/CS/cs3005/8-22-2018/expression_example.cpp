#include <iostream>

int run_example_one() {
    int x = 1;
    int y = 2;
    int z = x;
    int a;

    z += y;

    //add one to z;
    z++;

    //adds one 
    ++z;

    //only changes a
    a = x + 1;

    //changes x and a
    a = x += 1;
}


int main() {
    run_example_one();
    return 0; 
}