#include<bits/stdc++.h>
using namespace std;

// Given a string you need to print all possible strings
// that can be made by placing spaces (zero or one) in between them.

void generateSpaceSubsets(char* inp, char* out, int i, int j){
    
    // base case : have i reached the end of the input array
    if(inp[i]=='\0'){
        // terminate and print the output
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    
    // i am standing at the ith character of the input array and i have to make a decision

    // Add a space before the ith character 
    out[j]= ' ';
    out[j+1] = inp[i];

    generateSpaceSubsets(inp, out, i+1, j+2); // here we use j+2 , bcoz we already used j, j+1 characters

    // Do not add a space before the ith character
    out[j] = inp[i];
    generateSpaceSubsets(inp, out, i+1, j+1);
    return;
}

int main(){

    char inp[10];
    cin>>inp;

    char out[20];

    out[0] = inp[0];
    generateSpaceSubsets(inp, out, 1, 1);

    return 0;
}
