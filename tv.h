#ifndef TV_H_
#define TV_H_

class Tv{
    private:
        int state,volume,maxchannel,channel,mode,input;
    public:
        friend class Remote;
        enum {off,On};
        enum{MinVal,MaxVal = 20};
        enum{Antenna,Cable};
        enum{TV,DVD};

        Tv(int s = off,int mc = 125):state(s),maxchannel(mc),mode(Cable),input(TV){}
        void onOff(){state = (state == On) ? off : On;}
        bool isOn(){return state == On;}
        bool volup();
        bool voldown();
        void chanup();
        void chandown();
        void set_mode(){mode = (mode == Antenna) ? Cable:Antenna;}
        void set_input(){input =(input == TV)? DVD :TV;}
        void settings() const; // display all settings
        
};

// Remote class 
class Remote{
    private:
        int mode;   //controls TV or DVD
    public:
        Remote(int m = Tv::TV):mode(m){}
        bool volup(Tv & t){return t.volup();}
        bool voldown(Tv& t){return t.voldown();}
        void onOff(Tv & t){return t.onOff();}
        void chanup(Tv & t){return t.chanup();}
        void chandown(Tv & t){return t.chandown();}
        void set_chan(Tv & t,int c){t.channel = c; }
        void set_mode(Tv & t){t.set_mode();}
        void set_input(Tv & t){t.set_input();}
};
#endif