#include <iostream>

using namespace std;

void function(int SH,int SM,int EH,int EM)
{
    for(int i = SH; i <= EH; i++)
    {
        if(i==SH)
        {
            for(int j=SM; j<= 59; j++)
            {
                if(i>=EH&&j>EM)
                {
                    break ;
                }
                else {
         			if(i<10&&j>=10)
                    {
                		cout<<"0"<<i<<":"<<j<<endl;
                    }
                    else if(i>=10&&j<10)
                    {
                    	cout<<i<<":0"<<j<<endl;
					}
					else if(i<10&&j<10)
					{
						cout<<"0"<<i<<":0"<<j<<endl;
					}
                    else
                    {
                        cout<<i<<":"<<j<<endl;
                    }
                }
            }
        }
        else if(i>=SH)
        {
            
            for(int j=0; j<= 59; j++)
            {
                if(i>=EH&&j>EM)
                {
                    break;
                }
                else {
                	
                    if(i<10&&j>=10)
                    {
                		cout<<"0"<<i<<":"<<j<<endl;
                    }
                    else if(i>=10&&j<10)
                    {
                    	cout<<i<<":0"<<j<<endl;
					}
					else if(i<10&&j<10)
					{
						cout<<"0"<<i<<":0"<<j<<endl;
					}
                    else
                    {
                        cout<<i<<":"<<j<<endl;
                    }
                    
                }
            }        }
    }
    
}

main()
{
    function(1,20,10,50);
    
    
    cout<<endl;
    system("pause");
}
