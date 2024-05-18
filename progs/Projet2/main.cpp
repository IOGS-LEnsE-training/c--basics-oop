#include <iostream>
#include <time.h>

using namespace std;

void display_array(float*, int);
void init_array(float*, int, float);
void rand_array(float*, int);

int main()
{
    float t[10] = {1.8};

    printf("RAND_MAX = %d \n", RAND_MAX);
    srand (time(NULL));

    display_array(t, 10);
    init_array(t, 10, 3.4);
    display_array(t, 10);

    rand_array(t, 10);
    display_array(t, 10);

    return 0;
}


void display_array(float* t, int n){
    for(int k=0; k < n; k++){
        printf("%f ", t[k]);
    }
    printf("\n");
}

void init_array(float* t, int n, float value){
    for(int k=0; k < n; k++){
        t[k] = value;
    }
}

void rand_array(float* t, int n){
    for(int k=0; k < n; k++){
        t[k] = rand() / (RAND_MAX*1.0);
    }
}
