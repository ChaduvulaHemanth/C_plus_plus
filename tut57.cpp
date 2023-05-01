#include<iostream>
using namespace std;

class CWH{
    protected:
       string title;
    float rating;
    public:
     CWH(string s, float r){
      title = s;
      rating =r;
    }
   virtual void display(){
   }
};

class CWHVideo:public CWH{
      private:
           float videoLength;
      public:
      CWHVideo(string s, float r, float vl):CWH(s,r){
        videoLength=vl;
      }
      void display(){
        cout<<"This is an amazimg video with title "<<title<<endl;
        cout<<"This video has rating of "<<rating<<" out of 5 stars"<<endl;
        cout<<"This video has time duration of "<<videoLength<<" minutes"<<endl;
      }

};
class CWHtext:public CWH{
    private:
        int words;
    public:
    CWHtext(string s, float r, int w):CWH(s,r){
        words=w;
    }
    void display(){
        cout<<"This is an amazimg text with title "<<title<<endl;
        cout<<"This video has rating of "<<rating<<" out of 5 stars"<<endl;
        cout<<"This video has "<<words<<" words"<<endl;
      }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    title="Django video/title";
    rating=4.5;
    vlen=10.36;
    words=4500;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();
    
    CWHtext djtext(title, rating, words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();

 
    return 0;
}

/*
// Rules for virtual functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

*/