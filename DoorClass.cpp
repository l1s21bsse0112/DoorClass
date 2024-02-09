#include<iostream>
using namespace std;

class Door {
private:
    bool isOpen;
    bool isLocked;

public:
    Door();
	void openDoor() {
		cout << "door is opening ....." << endl;
		cout << "Door opened Successfully.\n\n";
	}

    void closeDoor() {
        cout << "Door is Closing.....\n\n";
		cout << "Door is closed successfully\n\n";
    }

    void lockDoor(){
		cout << "The Door is getting locked.\n\n";
		cout << "The Door has been locked succesfully\n\n";
	}
	
    void unlock(){
		cout <<"The Door has been unlocked\n\n";
	}

	
    bool isDoorOpen() const {
		return true;
	}
	
    bool isDoorLocked() const{
		return true;
	}
};

int main() {
    return 0;
}
