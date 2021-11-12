#include <iostream>

using namespace std;

int main() {
    
    cout<<"hello anon, my name is compiler-chan, whats yours?";
    string name;
    getline(cin,name);
    cout<<"nice to meet you, "<<name<<". are you a boy?(if yes press 1 else 0)";
    bool boy;
    cin>>boy;
   
    if(boy==true){
        cout<<"can i call you "<<name.substr(0,4)<<"-kun?";
    }else{
        cout<<"can i call you "<<name.substr(0,4)<<"-chan?";
    };
    bool KunRchan;
    
    cin>>KunRchan;
    if(KunRchan&&boy==true){
        cout<<"YAY "<<name.substr(0,4)<<"-kun"<<endl;
        
    }if(KunRchan==true&&boy==false){
        cout<<"YAY "<<name.substr(0,4)<<"chan"<<endl;
    }
    if(KunRchan==false&&boy==false){
        cout<<"I'll call you "<<name.substr(0,4)<<"-chan anyway"<<endl;
    }if(KunRchan==false&&boy==true){
        cout<<"I'll call you "<<name.substr(0,4)<<"-kun anyway"<<endl;
    }else{
        cout<<"";
    };
  
    cout<<"Do you like chicken?"<<endl;
    bool chicken;
    cin>>chicken;
    if(chicken==true){
        cout<<"Do you like yakisoba noodles?"<<endl;
        bool yakisoba;
        cin>>yakisoba;
        if(yakisoba==true){
            cout<<"Nice! Me too!"<<endl;
        }else{
            cout<<"You are beneath me."<<endl;
        }
    }else{
        cout<<"ew a vegetarian"<<endl;
        cout<<"Do you like paneer atleast?"<<endl;
        bool paneer;
        cin>> paneer;
        if(paneer==true){
            cout<<"thank god, you are salvageable"<<endl;

        }else{
            cout<<"wow, what a weirdo"<<endl;
        }
        
        
    };
    cout<<"Do you like anime :)?"<<endl;
    bool anime;
    cin>>anime;
    if(anime==true&&chicken==false){
        cout<<"cringe weeb AND a vegetarian lmao"<<endl;
    }if(anime==true && chicken==true){
        cout<<"cringe weeb, atleast you arent vegetarian though...."<<endl;
    }if(anime==false && chicken==true){
        cout<<"uncultured"<<endl;
    }if(anime==false && chicken==true){
        cout<<"uncultured"<<endl;
    }else{
        cout<<"\n\n";
    };


string show;
    cout<<"What are your favourite shows?"<<endl;
    cin.ignore();
    getline(cin,show);
    cout<<"hmmm never heard of "<<show<<  "OwO\n\n\n"<<endl;
    



    cout<<"This is boring, Goodbye "<<name<<". I hope i could take some loneliness away <3";

    

    return 0;
}
