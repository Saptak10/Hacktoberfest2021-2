#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
       string::iterator it;
        int total = 0;
        for(string::iterator i = s.begin(); i != s.end(); i++)
        {
            switch(*i)
            {
                case 'I': 
                    total += 1;
                    break; 
                case 'V':
                     if(*(i - 1) == 'I' ) {total += 3; break;}
                    total += 5;
                    break; 
                case 'X':
                     if(*(i - 1) == 'I' ) {total += 8; break;}
                    total += 10;
                    break;
                case 'L':
                    if(*(i - 1) == 'X' ) {total += 30; break;}
                    total += 50; 
                    break;
                case 'C':
                    if(*(i - 1) == 'X' ) {total += 80; break;}
                    total +=100; 
                    break;
                case 'D':
                    if(*(i - 1) == 'C' ) {total += 300; break;}
                    total += 500; 
                    break;
                case 'M':
                     if(*(i - 1) == 'C' ) {total += 800; break;}
                    total += 1000;
                    break; 
            }
        }
        return total;
    }
};

int main()
{
  Solution Rtoi;
  string roman;
  cin>>roman;
  int number;
  number = Rtoi.romanToInt(roman);
  cout<<number;
}
  
