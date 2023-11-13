#include<iostream>
#include<cmath>
using namespace std;


double distCalc(double latitudeX1, double latitudeX2, double longtitudeY1, double longtitudeY2) {
	double r = 6378.137;

	double div180pi = 57.29577951;
	
	double latitudeX1R = latitudeX1 / div180pi;
	double latitudeX2R = latitudeX2 / div180pi;
	double longtitudeY1R = longtitudeY1 / div180pi;
	double longtitudeY2R = longtitudeY2 / div180pi;


	double d = r * acos(sin(latitudeX1R) * sin(latitudeX2R) + cos(latitudeX1R) * cos(latitudeX2R) * cos(longtitudeY2R - longtitudeY1R));

	return d;
}
 
int main() {

	double latitudeX1, longtitudeY1;
	double latitudeX2, longtitudeY2;


	cout << "Point A : " << endl;
	
	cout << "Latitude : ";
	cin >> latitudeX1;
	
	cout << "Longtitude: ";
	cin >> longtitudeY1;

	cout << "Point B : " << endl;

	cout << "Latitude : ";
	cin >> latitudeX2;

	cout << "Longtitude: ";
	cin >> longtitudeY2;

	cout << "The distance between Point A and B is " << distCalc(latitudeX1, latitudeX2, longtitudeY1, longtitudeY2) << endl;;


}