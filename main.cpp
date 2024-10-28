#include <iostream>
using namespace std;

void docking_countdown();
void truck_weight_check(int load_weight);
void school_zone_signal(string signal_color);
int get_ticket_price(int visitor_age);
void verify_username();

int main() {
    docking_countdown();
    truck_weight_check(1000);
    school_zone_signal("Green");
    cout << get_ticket_price(12) << endl;
    verify_username();
    return 0;
}

void docking_countdown() {
     for (int  i = 20;  i == 0 ; i -=3 ) {
        cout << i << endl;
    }
    cout << "docking complete" << endl;
}

void truck_weight_check(int load_weight) {
    if (load_weight <1200) {
     cout << "within limit" << endl;
    } else {
        cout << "over weight" << endl;
    }
}

void school_zone_signal(string signal_color) {
    if (signal_color == "Flashing Red") {
        cout << "Stop" << endl;
    } else if (signal_color == "Yellow") {
        cout << "Be Ready" << endl;
    } else {
        cout << "Proceed" << endl;
    }
}

int get_ticket_price(int visitor_age) {
    if (visitor_age <10 ) {
        return 8;
    }else if (visitor_age <60 ) {
        return 18;
    } else {
        return 12;
    }
}

void verify_username() {
string username;
    do {
        cin >> username;
    } while (username != "CodeMaster123");
    cout << "Access Granted!" << endl;
}