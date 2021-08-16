
#include <iostream>
#include <list>
using namespace std;

class youtubechannel {
private:   //encapsulation  //access modifier, if not modified,by default the attributes remain private
    string channelname;
    int subscribers;
    list<string> videos;
protected: // makes the attribute available to be used by the derived class
    string name;
    int contentQuality = 0;
public:
    //constructor 
    youtubechannel(string Name, string ChannelName, int Subscribers) {
        name = Name;
        channelname = ChannelName;
        subscribers = Subscribers;
    }

    //methods of a class
    void getInfo() {   // getter
        cout << name << endl;
        cout << channelname << endl;
        cout << subscribers << endl;
        for (string uploaded : videos)
            cout << uploaded << endl;
    }
    void setName(string argname) {    //setter
        name = argname;
    }

    void subscribe() {
        subscribers++;
    }
    void unsubscribe() {
        if(subscribers > 0)
        subscribers--;
    }
    void publishVideo(string title) {
        videos.push_back(title);
    }
    void CheckAnalytics() {
        if (contentQuality < 5)
            cout << name << " has bad quality content." << endl;
        else
            cout << name << " has great content!" << endl;
    }
};

class cookingYoutubeChannel : public youtubechannel {     // inheritance 

public:
    cookingYoutubeChannel(string name, string channelname, int subscribers) :
        youtubechannel(name, channelname, subscribers) { //inheriting from the constructor method
                                                         //of the base class

    }

    void Practice() {
        cout << name <<" is Learning Cooking" << endl;
        contentQuality++;
    }
};

class singingYoutubeChannel : public cookingYoutubeChannel {
public:
    singingYoutubeChannel(string name, string channelname, int subscribers) : 
        cookingYoutubeChannel(name, channelname, subscribers) {
    }
    void Practice() {
        cout << name << " is practicing music....";
        contentQuality++;
    }
};

int main()
{
    //first instance of the class youtubechannel - sohamstech object
    youtubechannel sohamstech("Soham", "sohamstech", 200000);
    sohamstech.publishVideo("introduction");
    sohamstech.publishVideo("video1");
    sohamstech.publishVideo("video2");
    sohamstech.unsubscribe();
    sohamstech.unsubscribe();
    sohamstech.unsubscribe();
    sohamstech.subscribe();
    sohamstech.setName("Sonu");


    //invoking getInfo method for the object
    sohamstech.getInfo();

    //2nd instance of the class - peterstech object
    youtubechannel peterstech("Peter", "SpideySwings", 100000);
    peterstech.publishVideo("Hey everyone");
    peterstech.publishVideo("homecoming");
    peterstech.publishVideo("far from home");
    peterstech.unsubscribe();
    peterstech.setName("Spiderman");

    peterstech.getInfo();

    //1st instance of the derived class

    cookingYoutubeChannel sohamscooking("soham", "Sohamkitchen", 50000);

    sohamscooking.publishVideo("Biriyani");
    sohamscooking.publishVideo("Gulab jamun");
    sohamscooking.publishVideo("Ice cream");
    sohamscooking.getInfo();
    sohamscooking.Practice();
    sohamscooking.Practice();
    sohamscooking.Practice();
    sohamscooking.Practice();
    sohamscooking.Practice();
    sohamscooking.Practice();
    sohamscooking.Practice();
    //address of an instance/object of the derived class stored in a pointer variable of the base class
    youtubechannel* channel1 = &sohamscooking; 
    channel1->CheckAnalytics(); //this is nothing but sohamscooking.CheckAnalytics();

    //2nd instance of the derived class
    cookingYoutubeChannel babyCooking("Baby", "babyskitchen", 50);
    babyCooking.getInfo();
    babyCooking.Practice();
    babyCooking.Practice();
    babyCooking.Practice();
    babyCooking.Practice();
    youtubechannel* channel2 = &babyCooking;
    channel2->CheckAnalytics();

    singingYoutubeChannel Sohamsingingytchannel("Sonu", "SohamSings", 4500000);

    Sohamsingingytchannel.getInfo();
    Sohamsingingytchannel.Practice();
    Sohamsingingytchannel.Practice();
    Sohamsingingytchannel.Practice();
    Sohamsingingytchannel.Practice();
    Sohamsingingytchannel.Practice();
    Sohamsingingytchannel.Practice();
    Sohamsingingytchannel.Practice();

    youtubechannel* channel3 = &Sohamsingingytchannel;
    channel3->CheckAnalytics();
}
