#include <iostream>
#include <string>
#include <list>
using namespace std;

class YouTubeCH
{
private:
    string name; // Name of channel
    string OwnerName; // Name Owner of Channel
    list<string> PublishedVideoTitles; //List of videos
    unsigned int SubscriberCount; //Number of people subscribed to channel

public:
    YouTubeCH(string chname , string Oname,list <string> pVidTitles, unsigned int sCount): name(chname), OwnerName(Oname), PublishedVideoTitles(pVidTitles), SubscriberCount(sCount)
    {}
    YouTubeCH(string Name , string ownerName) {

        name = Name;
        OwnerName  = ownerName;
        SubscriberCount = 0;
    }
     void Subscribe()
        {SubscriberCount++;}
     void Unsubscribe()
        { 
        if(SubscriberCount > 0)
        {SubscriberCount--; }
        }

     void set_name(const string& cn)
     {
        name = cn;

     }

    string get_name()
    {
        return name;

    }
    void PublishVideo(string videoTitle){
        PublishedVideoTitles.push_back(videoTitle);
    }

    void GetInfo()
    {
        cout << "\nABOUT THE CHANNEL: \n" ;
        cout << "-----------------------------" << endl;
        cout << "Channel Name: " << name << endl ;
        cout << "Channel Owner: " << OwnerName << endl;
        cout << "Subscribers : "  << SubscriberCount << " Subscribers\n"<< endl;
        cout << "-----------------------------" << endl;

        cout<< "Videos: \n" ;
         cout << "--####---" << endl;
        for (string videoTitle  : PublishedVideoTitles)
            {cout << videoTitle << "," << endl;}

    }

};

int main(){

    YouTubeCH ytchannel("3Spaces Studio","Benjamin Appiah-Boadu",{"Python Tutorials","C++","vac"},2000);


    //cout<< ytchannel.get_name()<< endl;
    ytchannel.PublishVideo("Trip VLog");
    ytchannel.GetInfo();

    YouTubeCH ytchannel2("Tutoials","Marcek");

    ytchannel2.PublishVideo("First Vid");

    ytchannel2.Unsubscribe();
    ytchannel2.GetInfo();

    for (int i = 0 ; i < 20 ; i++){

        ytchannel2.Subscribe();
       

    }

     ytchannel2.GetInfo();

    return 0;

}
