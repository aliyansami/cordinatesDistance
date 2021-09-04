#include<iostream>
#include<cmath>
using namespace std;

class point {

private:
    float X;
    float Y;
    float Z;

public:

    void setpoint(float a, float b, float c) {
        this->X = a;
        this->Y = b;
        this->Z = c;
    }

    void set_X(float a) {
        this->X = a;
    }

    void set_Y(float b) {
        this->Y = b;
    }

    void set_Z(float c) {
        this->Z = c;
    }

    void get_point(float& a, float& b, float& c) {
        a = this->X;
        b = this->Y;
        c = this->Z;
    }

    float get_X() {
        return X;
    }


    float get_Y() {
        return Y;
    }

    float get_Z() {
        return Z;
    }

    void input() {

        float x;
        float y;
        float z;

        cout << "Eneter the X-coordinate: " << "\n";
        cin >> x;
        cout << "Eneter the X-coordinate: " << "\n";
        cin >> y;
        cout << "Eneter the X-coordinate: " << "\n";
        cin >> z;

        setpoint(x, y, z);

    }

    void output() {
        cout << "X-coordinate: " << X << "\n";
        cout << "Y-coordinate: " << Y << "\n";
        cout << "Z-coordinate: " << Z << "\n";
    }

    float find_distance(point& p1, point& p2) {
        float d = 0;
        d = sqrt(pow(p1.X - p2.X, 2) + pow(p1.Y - p2.Y, 2) + pow(p1.Z - p2.Z, 2));
        return d;
    }

    point closest_distance(point& p1, point& p2) {
        point p3;
        p3.setpoint(0, 0, 0);

        float d1;
        float d2;
        cout << "Distance between origin and first point: " << "\n";
        d1 = find_distance(p3, p1);
        cout << d1 << "\n";
        cout << "Distance between origin and second point: " << "\n";
        d2 = find_distance(p3, p2);
        cout << d2 << "\n";
        if (d1 < d2) {
            cout << "POINT 1 IS CLOSER TO ORIGIN!" << "\n";
            return p1;
        }
        else if (d1 > d2)
        {
            cout << "POINT 2 IS CLOSER TO THE ORIGIN!" << "\n";
        }

    }

};


int main() {

    point obj1;
    point obj2;
    float a = 0;
    float b = 0;
    float c = 0;

    obj1.input();
    obj2.input();

    obj1.get_point(a, b, c);
    obj2.get_point(a, b, c);

    obj1.output();
    cout << "\n";
    obj2.output();

    point closest;
    closest.closest_distance(obj1, obj2);

    system("pause");
    return 0;
}