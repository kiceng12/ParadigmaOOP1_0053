#ifndef ANAK_H
#define ANAK_H

class anak {
    public:
    string name;
    jantung varJantung;

    manusia(string pName)
        : name(pName) {
        cout << name << " hidup\n";
    }
    ~manusia() {
        cout << name << " mati\n";
    }
};
