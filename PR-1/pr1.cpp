
#include <iostream>

using namespace std;

#define SIZE 5

void bsort(int iArray[], int n);
int main()
    {
        char ch;
        int ii;
        int iArray[SIZE] ;
        
        for(ii = 0; ii<SIZE; ii++ )
            {
                cout << "Please enter an integer: ";
                cin >> iArray[ii];
            }
            
        cout << "\n Would you like to sort (Y/N) ";
        cin >> ch;
        
        if (ch=='Y' || ch=='y')
            {
                bsort(iArray, SIZE);
            }
            
        for(ii=0; ii<SIZE; ii++)
            {
                cout << iArray[ii] << " ";
            }
        }
        
void bsort(int iArray[], int n)
// Алгоритм бульбашкового сортування - BubbleSort
    {
        int i,j,k,t;
        for(i=0; i < n; i++)
        {
            j=i;
            for(k=j+1; k < n; k++)
                {
                    
                    if(iArray[k] <= iArray[j])
                        {
                            j=k;
                        }
                }
                
            if (i != j)
                {
                    t=iArray[j];
                    iArray [j] = iArray [i] ;
                    iArray[i] = t;
                }
            }
        }

