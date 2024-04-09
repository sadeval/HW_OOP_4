#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Lizard {

    string animalclass;
    string suborder;
    string family;
    int bodylength;

public:

    Lizard() {
        SetAnimalClass("Reptilia");
        SetSuborder("Iguania");
        SetFamily("Agamidae");
        SetBodyLength(25);
    }

    Lizard(string animalclass, string suborder, string family, int bodylength) {
        SetAnimalClass(animalclass);
        SetSuborder(suborder);
        SetFamily(family);
        SetBodyLength(bodylength);
    }

    ~Lizard() {
        cout << "The lizard ran away\n";
    }

    void Print() const {
        cout << "Animal class: " << animalclass << "\n";
        cout << "Suborder: " << suborder << "\n";
        cout << "Family: " << family << "\n";
        cout << "Body length: " << bodylength << "\n";
    }

    void SetAnimalClass(string animalclass) {
        this->animalclass = animalclass;
    }
    string GetSetAnimalClass() const {
        return animalclass;
    }

    void SetSuborder(string suborder) {
        this->suborder = suborder;
    }
    string GetSuborder() const {
        return suborder;
    }

    void SetFamily(string family) {
        this->family = family;
    }
    string GetFamily() const {
        return family;
    }

    void SetBodyLength(int bodylength) {
        if (bodylength < 5 || bodylength > 70) throw "ERROR!";
        this->bodylength = bodylength;
    }
    int GetBodyLength() const {
        return bodylength;
    }

    void Swim(string temperature) {
        cout << "Heat the bath to " << temperature << "\n";
    }

    void Eat(string insect) {
        cout << "Catch the " << insect << "\n";
    }

    void Gestures(string head_bob) {
        cout << "Violent bob " << head_bob << "\n";
    }

};

class Hospital {

    string name;
    string location;
    int availablebeds;
    double rating;

public:

    Hospital() {
        SetName("Tropinka");
        SetLocation("Kherson");
        SetBeds(10);
        SetRating(4.3);
    }

    Hospital(string name, string location, int availablebeds) {
        SetName(name);
        SetLocation(location);
        SetBeds(availablebeds);
        SetRating(4.3);
    }

    ~Hospital() {
        cout << "Hospital is closed\n";
    }

    void Print() const {
        cout << "Hospital's name: " << name << "\n";
        cout << "Location: " << location << "\n";
        cout << "Total beds: " << availablebeds << "\n";
    }

    void SetName(string name) {
        this->name = name;
    }
    string GetName() const {
        return name;
    }

    void SetLocation(string location) {
        this->location = location;
    }
    string GetLocation() const {
        return location;
    }

    void SetBeds(int availablebeds) {
        if (availablebeds < 0 || availablebeds > 20) throw "ERROR!";
        this->availablebeds = availablebeds;
    }
    int GetBeds() const {
        return availablebeds;
    }

    void SetRating(double rating) {
        if (rating < 0 || rating > 5) throw "ERROR!";
        this->rating = rating;
    }
    double GetRating() const {
        return rating;
    }

    void DoctorsAppointment(string doctor) {
        cout << "Choose a doctor: " << doctor << "\n";
    }

    void Examinations(string exam) {
        cout << "Choose an examination: " << exam << "\n";
    }

    void Registry(string reg) {
        cout << "Call the reception: " << reg << "\n";
        Sleep(1000);
        cout << "...subscriber is temporary unavailable, please call later...\n";
        Sleep(1000);
    }
};

class Painting {

    string frame;
    string canvas;
    string paint;

public:

    Painting() {
        SetFrame("wood");
        SetCanvas("cotton");
        SetPaint("watercolor");
    }

    Painting(string frame, string canvas, string paint) {
        SetFrame(frame);
        SetCanvas(canvas);
        SetPaint(paint);
    }

    ~Painting() {
        cout << "The painting is sold out\n";
    }

    void Print() const {
        cout << "Frame: " << frame << "\n";
        cout << "Canvas: " << canvas << "\n";
        cout << "Paint: " << paint << "\n";
    }

    void SetFrame(string frame) {
        this->frame = frame;
    }
    string GetFrame() {
        return frame;
    }

    void SetCanvas(string canvas) {
        this->canvas = canvas;
    }
    string GetCanvas() {
        return canvas;
    }

    void SetPaint(string paint) {
        this->paint = paint;
    }
    string GetPaint() {
        return paint;
    }

    void Hang(string galery) {
        cout << "The painting is in " << galery << " galery\n";
    }
};

class Hand {

    string bones;
    string muscles;
    string nerves;
    string vessels;
    int numfingers;

public:

    Hand() {
        SetBone("Carpals, Metacarpals, Phalanges");
        SetMuscles("Thenar group, Hypothenar group, Metacarpal group");
        SetNerves("Median nerve, Radial nerve, Ulnar nerve");
        SetVessels("Arteries and Veins");
        SetFinger(5);
    }

    Hand(string bones, string muscles, string vessels) {
        SetBone(bones);
        SetMuscles(muscles);
        SetNerves("Median nerve, Radial nerve, Ulnar nerve");
        SetVessels(vessels);
        SetFinger(5);
    }

    ~Hand() {
        cout << "No hand for pathological investigation\n";
    }

    void Print() const {
        cout << "General bones: " << bones << "\n";
        cout << "General muscles: " << muscles << "\n";
        cout << "General nerves: " << nerves << "\n";
        cout << "General vessels: " << vessels << "\n";
        cout << "Number of fingers on the right hand: " << numfingers << "\n";
    }

    void SetBone(string bones) {
        this->bones = bones;
    }
    string GetBone() const {
        return bones;
    }

    void SetMuscles(string muscles) {
        this->muscles = muscles;
    }
    string GetMuscles() const {
        return muscles;
    }

    void SetNerves(string nerves) {
        this->nerves = nerves;
    }
    string GetNerves() const {
        return nerves;
    }

    void SetVessels(string vessels) {
        this->vessels = vessels;
    }
    string GSetVessels() const {
        return vessels;
    }

    void SetFinger(int numfingers) {
        if (numfingers < 0 || numfingers > 5) throw "ERROR!";
        this->numfingers = numfingers;
    }
    int GetFinger() const {
        return numfingers;
    }

    void Grab(string things) {
        cout << "I want grab " << things << "\n";
    }

    void Beat(string things) {
        cout << "I want beat " << things << "\n";
    }

    void Work(string things) {
        cout << "I work with " << things << "\n";
    }
};

class Book {

    string name;
    int pages;
    double weight;

public:

    Book() {
        SetBookName("War and Peace");
        SetPages(1300);
        SetWeight(6.4);
    }

    Book(string name, int pages) {
        SetBookName(name);
        SetPages(pages);
        SetWeight(6.4);
    }

    ~Book() {
        cout << "Book is sold out\n";
    }
    
    void Print() const {
        cout << "Book name: " << name << "\n";
        cout << "Total pages: " << pages << "\n";
        cout << "Takes up mb: " << weight << "\n";
    }

    void SetBookName(string name) {
        this->name = name;
    }
    string GetBookName() {
        return name;
    }

    void SetPages(int pages) {
        if (pages < 0 || pages > 1600) throw "ERROR!";
        this->pages = pages;
    }
    int GetPages() const {
        return pages;
    }

    void SetWeight(double weight) {
        if (weight < 0 || weight > 500) throw "ERROR!";
        this->weight = weight;
    }
    double GetWeight() const {
        return weight;
    }

    void AboutBook() {
        cout << "Book " << name << " contains " << pages << " pages. " << "\n";
        cout << "Book takes " << weight << " mb." << "\n";
    }
};

int main() {

    Lizard vitticeps;
    vitticeps.Print();
    Lizard vulgaris("Amphibia", "Urodela", "Salamandridae", 11);
    vulgaris.Print();

    Hospital tropinka;
    tropinka.Print();
    Hospital taurt("Taurt", "Odesa", 15);
    taurt.Print();

    Painting bosch;
    bosch.Print();
    Painting valejio("framless", "linen", "oil");
    valejio.Print();

    Hand hand;
    hand.Print();
    Hand palm("Scaphoid", "Abductor pollicis brevis", "Ulnar arteries");
    palm.Print();
   

    Book warpeace;
    warpeace.Print();
    Book anatomy("Gray's Anatomy", 1562);
    anatomy.Print(); 

    return 0;
}