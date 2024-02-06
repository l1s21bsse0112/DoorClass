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
	}

    void closeDoor() {
        cout << "Door is Closing.....\n\n";
    }

    void lockDoor();
    void unlock()
{
	cout <<"The Door has been unlocked\n\n";
}

	
    bool isDoorOpen() const {
		return true;
	}
	
    bool isDoorLocked() const;
};

int main() {
    return 0;
}
