#include <stdio.h>
int display(int count){
    int a[count];
    for(int i = 0; i < count ; i++){
        a[i] = i + 1;
    }
    for(int b = 0; b < 10; b++){
        for(int c = 0; c < 10; c++){
            if(a[c] > a[c + 1]){
                int temp0 = a[c + 1];
                a[c + 1] = a[c];
                a[c] = temp0;
            }
        }
    }
    for(int d = 10; d < 20; d++){
        for(int e = 10; e < 19; e++){
            if(a[e] < a[e + 1]){
                int temp1 = a[e + 1];
                a[e + 1] = a[e];
                a[e] = temp1;
            }
        }
    }
    for(int f = 20; f < 30; f++){
        for(int g = 20; g < 30; g++){
            if(a[g] > a[g + 1]){
                int temp2 = a[g + 1];
                a[g + 1] = a[g];
                a[g] = temp2;
            }
        }
    }
    for(int h = 30; h < 40; h++){
        for(int j = 30; j < 40; j++){
            if (a[j] < a[j + 1]){
                int temp3 = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp3;
            }
        }
    }
    for(int z = 0; z < count; z++){
        printf("%d\n ", a[z]);
    }
}
int main(){
    display(40);
    return 0;
}
