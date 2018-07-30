#include<iostream>
#include<exception>
#include<string>

using namespace std;

struct Exception{

    string _msg;
    Exception(): _msg("I"){}
    Exception(const Exception& fellow):_msg(fellow._msg+"C"){}
    Exception(Exception &&fellow): _msg(forward<string>(fellow._msg)){ 
        _msg +="M";
    }
    template<typename T> Exception&& operator +(const T& item){
        _msg+=item;
        return move(*this);
    }
};

class IOEXception: public Exception{

};
class FileException: public Exception{

};

int main(){

    try{
        throw FileException() + "P";
    }
    catch(FileException ex){
        cout<<"F"+ex._msg;
    }
    catch(IOEXception ex){
        cout<<"I"<<ex._msg;
    }
    catch(Exception ex){
        cout<<"E"<<ex._msg;
    }
}