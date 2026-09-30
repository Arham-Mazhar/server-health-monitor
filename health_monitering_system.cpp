#include <iostream>
#include <vector>
using namespace std;
void server(int cpu,int ram){
	 //if ((cpu >= 0 and cpu <= 100) and (ram >= 0 and ram <= 100)) {

        if ((cpu <= 60) and (ram <= 60)) {
            cout << "Server is healthy\n";
        }
        else if ((cpu <= 80) and (ram <= 80)) {
            cout << "Server usage is moderate\n";
        }
        else{
            cout << "Warning: High Server usage\n";
        }

       // }
    //else {
       //cout << "Invalid input\n";
      //}

}

bool validation(int cpu, int ram){
	if((cpu>=0 and cpu<=100) and (ram>=0 and ram<=100)){
		return true;
	}
	else{
		return false;
	}
}


int main() {

    //int cpu,ram;
    //int number = 1;
    int servers;
    cout<<"How many server you want to check: ";
    cin>>servers;
    while(servers<=0)
	{
	cout<<"Invalid value please enter again: ";
	cin>>servers;
	}
//vector concept
     vector<int>cpu(servers);
     vector<int>ram(servers);
    //if (servers >= 1)
    //{
    	//while( number <= servers )
	  //for( int number = 1; number <= servers; number++)
	    for(int i = 0; i < servers; i++)    //vector concept loop
    	{
		cout<<"\n_________________________";
		cout<<"\nServer "<< i+1 <<endl;
    		cout << "Enter CPU Usage (0-100): ";
    		cin >> cpu[i];
    		cout<<"Enter RAM Usage (0-100): ";
    		cin>>ram[i];
    		/*if(validation(cpu[i],ram[i])){
		//cout<<"Valid Input\n";
			server(cpu[i],ram[i]);
	    	}
    		else{
			cout<<"Invalid input\n";
    		}*/
		//number = number + 1;
      }
	//vector concept output loop
int healthy = 0;
int moderate = 0;
int high = 0;
int invalid = 0;
	  for(int j = 0; j < servers; j++)
		{
		cout<<"\nServer "<<j+1<<endl;
		cout<<"\nCPU: " <<cpu[j]<<"%, "<<"RAM: "<<ram[j]<<"%";
		cout<<"\nStatus: ";
		if(validation(cpu[j],ram[j]))
			{
				server(cpu[j],ram[j]);

				if(cpu[j] <= 60 and ram[j] <= 60)
				{
					healthy++;
				}
				else if(cpu[j]<=80 and ram[j]<=80)
				{
					moderate++;
				}
				else if(cpu[j]<=100 and ram[j]<=100)
				{
					high++;
				}

			}
		else
			{
				cout<<"Invalid\n";
				invalid++;
			}
		}
cout<<"\n\tSUMMARY\n";
cout<<"Total servers check: "<<servers<<endl;
cout<<"Healthy server: "<<healthy<<endl;
cout<<"Moderate server: "<<moderate<<endl;
cout<<"High server: "<<high<<endl;
cout<<"Invalid server: "<<invalid<<endl;
    //else{
	//cout<<"Invalid server input";
        //}
    //}
}
