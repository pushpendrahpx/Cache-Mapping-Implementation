#include <iostream>
using namespace std;

#define BYTE_SIZE 8

#define MAIN_MEMORY_SIZE 128 // No. of Blocks in Main Memory
#define CACHE_MEMORY_SIZE 8 // No. of Blocks in Cache Memory
// Total 256 Words = 1024 Bytes of Main Memory
// Let Cache can have 16 Words = 64 Bytes of Cache Memory
#define WORD_SIZE 4 // Each Word have 4 Bytes of Memory
#define BLOCK_SIZE 2 // Each Block will have 2 Bytes of Memory


typedef int BIT;
typedef BIT BYTE[8];
typedef BYTE WORD[WORD_SIZE];
typedef WORD BLOCK[BLOCK_SIZE];


BLOCK MAIN[MAIN_MEMORY_SIZE] = {0};
BLOCK CACHE[CACHE_MEMORY_SIZE];


// This Functions Accepts Parameter, how many Blocks of Main Memory we want to see.
// Default parameters are used as 1, if function is called without parameter loop will not execute, and no output will be generated
// So Make Sure to pass some no. 
void see_mainMemory(int to_count = 1){
    if(to_count <= 128){
        // TO Ensure Input Number is With in Limits
        
        cout<<"\n\t\t MAIN MEMORY MATRIX \t\t\n";
        for(int bl = 0; bl < to_count ; bl++){
            for(int wo = 0; wo < BLOCK_SIZE; wo++){
                for(int by = 0; by < WORD_SIZE; by++){
                    for(int bi = 0;  bi < BYTE_SIZE ; bi++){
                        cout<<MAIN[bl][wo][by][bi];
                    }
                    cout<<" | ";
                }
                cout<<"\n";
            }
            cout<<"\n\n";
        }
    }
}
int main(){
    char choice;
    do{
        cout<<" ~[CACHE] $ ";
        cin>>MAIN[0][0][0][1];

        see_mainMemory();
        
        
        
        cout<<"\n Type 'N' to Exit or any other key to Continue :- ";
        cin>>choice;
         cout<<"\n";
    }while(choice != 'N');
}