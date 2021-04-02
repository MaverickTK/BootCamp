Take as input str, a string. Write a recursive function which prints all the words possible by rearranging the characters of this string which are in dictionary order larger than the given string.
The output strings must be lexicographically sorted.

Input Format
Single line input containing a string

Constraints
Length of string <= 10

Output Format
Display all the words which are in dictionary order larger than the string entered in a new line each. The output strings must be sorted.

Sample Input
cab

Sample Output
cba
Explanation
The possible permutations of string "cab" are "abc" , "acb" ,"bac" , "bca" , "cab" and "cba" . Only one of them is lexicographically greater than "cab". We only print "cba".


// Code :

#include <iostream>
#include<string.h>
#include<set>
#include<iterator>

using namespace std;

 char temp[1000];

 set<string>s;

void permute(string in, int i)
{
    if(in[i]=='\0')
    {

         s.insert(in); 

        return;
    }

    for(int j=i;in[j]!='\0';j++)
    {
       swap(in[i],in[j]);
       permute(in,i+1);
       swap(in[i],in[j]);
    }


}


int main()
{
   string in;
   cin>>in;

   string temp;

   temp=in;


   permute(in,0);

   set<string> :: iterator itr;


   for(itr=s.begin();itr!=s.end();itr++)
   {
     if(*itr>temp)
     {
         cout<<*itr<<endl;
     }
   }

    return 0;
}
