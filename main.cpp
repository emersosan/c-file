#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    ifstream check_file;
    fstream create_file;
    string filename;
    string message;
    string n_f_name;
	string answer1;
	string answer2;
	string answer3;
	string line;
	string line_detect;
	do{
		cout<<"welcome user"<<endl;
		cout<<"what would you like to do today"<<endl;
		cout<<"if you wan to load  exist file enter[L]"<<endl;
		cout<<"if you want to create file  enter[C]"<<endl;
		cout<<"Exit[E]"<<endl;
		cin>>answer1;
	}while(answer1!="l" && answer1!="c" && answer1!="e");
    if(answer1=="l")
    {
		/* engineer Ali Nur Ali  ID:20170380
		i hope to be programmer
		i love my mam */
            cout<<"enter file name"<<endl;
            cin>>filename;
            filename=filename+".txt";
            check_file.open(filename.c_str());
            if(check_file.is_open())
            {
                cout<<"--- file opened successfully ---"<<endl;
                cout<<"--- file contents ---------------"<<endl;
                while(getline(check_file,line))
                {
                    line_detect.append(line);
                    cout<<line<<endl;
                }
                cout<<"-------------------------------------------------------"<<endl;
                cout<<"do you want to save this file content to an other file[yes/no]"<<endl;
                cin>>answer2;
                if(answer2=="yes")
                {
                    cout<<"enter new file name"<<endl;
                    cin>>n_f_name;
                    n_f_name=n_f_name+".txt";
                    create_file.open(n_f_name.c_str(),ios::app);
                    if(create_file.is_open())
                    {

                        create_file<<line_detect;
                        cout<<"your data has been successfully copied to your new file"<<endl;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else if(check_file.fail())
            {
            	cout<<"file does not exist\n";
			}
			check_file.close();
    }


    else if(answer1=="c")
    {
          	/* engineer Ali Nur Ali  ID:20170380
			i hope to be programmer
			i love my mam*/
        cout<<"create new file name"<<endl;
        cin>>n_f_name;
        n_f_name=n_f_name+".txt";
        create_file.open(n_f_name.c_str(),ios::in | ios:: out | ios::app);
        if(create_file.is_open())
        {
            cout<<"write your message here"<<endl;
            cin>>message;
            getline(cin,message);
            create_file<<message;
            cout<<"your data has been successfully copied to your new file"<<endl;
        }
        else
        {
            create_file.close();
            return 0;
        }
    }
    else if(answer1=="e")
    {
        cout<<"good bye";
        return 0;
    }
    return 0;
/* engineer Ali Nur Ali  ID:20170380
i hope to be programmer
i love my mam */
}
