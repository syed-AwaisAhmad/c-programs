#include <iostream>

using namespace std;

void function(int SH,int SM,int EH,int EM)
{
	if(EH<SH)
	{
		EH += 12;
		
	}
	
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
	int time[4];
	
    cout<<"Please enter starting time: ";
    cin>>time[0]>>time[1];
    cout<<"Please enter ending time: ";
    cin>>time[2]>>time[3];
    
    cout<<endl;
    function(time[0],time[1],time[2],time[3]);
    cout<<endl;
    system("pause");
}
