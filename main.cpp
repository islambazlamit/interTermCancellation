//
//  main.cpp
//  Inter-Term_Cancellation
//
//  Created by Islam Albazlamit on 20/06/2025.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <fstream>
using namespace std::chrono;
using namespace std;

void fourterms(int ac, double t1, double t2, double t3, double t4)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4;
                    if (abs(sum) < pow(10, -ac))
                    {
                        int m1, m2, m3, m4;
                        m1 = i1; m2 = i2; m3 = i3; m4 = i4;
                        equs << m1 << "," << m2 << "," << m3 << "," << m4 << endl;
                        cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4" << " == 0,";
                        cout << endl;
                    }
                    else
                    {
                        i4++;
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void fiveterms(int ac, double t1, double t2, double t3, double t4, double t5)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5;
                        if (abs(sum) < pow(10, -ac))
                        {
                            int m1, m2, m3, m4, m5;
                            m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5;
                            equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << endl;
                            cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5 " << " == 0,";
                            cout << endl;
                        }
                        else
                        {
                            i5++;
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void sixterms(int ac, double t1, double t2, double t3, double t4, double t5, double t6)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6;
                            if (abs(sum) < pow(10, -ac))
                            {
                                int m1, m2, m3, m4, m5, m6;
                                m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6;
                                equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << endl;
                                cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6" << " == 0,";
                                cout << endl;
                            }
                            else
                            {
                                i6++;
                            }
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void seventerms(int ac, double t1, double t2, double t3, double t4, double t5, double t6, double t7)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            for (int i7 = -l; i7 <= l; i7++)
                            {
                                double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6 + i7 * t7;
                                if (abs(sum) < pow(10, -ac))
                                {
                                    int m1, m2, m3, m4, m5, m6, m7;
                                    m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6; m7 = i7;
                                    equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << "," << m7 << endl;
                                    cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6  +  " << i7 << "i7" << " == 0,";
                                    cout << endl;
                                }
                                else
                                {
                                    i7++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void eightterms(int ac, double t1, double t2, double t3, double t4, double t5, double t6, double t7, double t8)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            for (int i7 = -l; i7 <= l; i7++)
                            {
                                for (int i8 = -l; i8 <= l; i8++)
                                {
                                    double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6 + i7 * t7 + i8 * t8;
                                    if (abs(sum) < pow(10, -ac))
                                    {
                                        int m1, m2, m3, m4, m5, m6, m7, m8;
                                        m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6; m7 = i7; m8 = i8;
                                        equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << "," << m7 << "," << m8 << endl;
                                        cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6  +  " << i7 << "i7  +  " << i8 << "i8" << " == 0,";
                                        cout << endl;
                                    }
                                    else
                                    {
                                        i8++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void nineterms(int ac, double t1, double t2, double t3, double t4, double t5, double t6, double t7, double t8, double t9)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            for (int i7 = -l; i7 <= l; i7++)
                            {
                                for (int i8 = -l; i8 <= l; i8++)
                                {
                                    for (int i9 = -l; i9 <= l; i9++)
                                    {
                                        double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6 + i7 * t7 + i8 * t8 + i9 * t9;
                                        if (abs(sum) < pow(10, -ac))
                                        {
                                            int m1, m2, m3, m4, m5, m6, m7, m8, m9;
                                            m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6; m7 = i7; m8 = i8; m9 = i9;
                                            equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << "," << m7 << "," << m8 << "," << m9 << endl;
                                            cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6  +  " << i7 << "i7  +  " << i8 << "i8  +  " << i9 << "i9" << " == 0,";
                                            cout << endl;
                                        }
                                        else
                                        {
                                            i9++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void tenterms(int ac, double t1, double t2, double t3, double t4, double t5, double t6, double t7, double t8, double t9, double t10)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            for (int i7 = -l; i7 <= l; i7++)
                            {
                                for (int i8 = -l; i8 <= l; i8++)
                                {
                                    for (int i9 = -l; i9 <= l; i9++)
                                    {
                                        for (int i10 = -l; i10 <= l; i10++)
                                        {
                                            double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6 + i7 * t7 + i8 * t8 + i9 * t9 + i10 * t10;
                                            if (abs(sum) < pow(10, -ac))
                                            {
                                                int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10;
                                                m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6; m7 = i7; m8 = i8; m9 = i9; m10 = i10;
                                                equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << "," << m7 << "," << m8 << "," << m9 << "," << m10 << endl;
                                                cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6  +  " << i7 << "i7  +  " << i8 << "i8  +  " << i9 << "i9  +  " << i10 << "i10" << " == 0,";
                                                cout << endl;
                                            }
                                            else
                                            {
                                                i10++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void eleventerms(int ac, double t1, double t2, double t3, double t4, double t5, double t6, double t7, double t8, double t9, double t10, double t11)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            for (int i7 = -l; i7 <= l; i7++)
                            {
                                for (int i8 = -l; i8 <= l; i8++)
                                {
                                    for (int i9 = -l; i9 <= l; i9++)
                                    {
                                        for (int i10 = -l; i10 <= l; i10++)
                                        {
                                            for (int i11 = -l; i11 <= l; i11++)
                                            {
                                                double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6 + i7 * t7 + i8 * t8 + i9 * t9 + i10 * t10 + i11 * t11;
                                                if (abs(sum) < pow(10, -ac))
                                                {
                                                    int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11;
                                                    m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6; m7 = i7; m8 = i8; m9 = i9; m10 = i10; m11 = i11;
                                                    equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << "," << m7 << "," << m8 << "," << m9 << "," << m10 << "," << m11 << endl;
                                                    cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6  +  " << i7 << "i7  +  " << i8 << "i8  +  " << i9 << "i9  +  " << i10 << "i10  +  " << i11 << "i11" << " == 0,";
                                                    cout << endl;
                                                }
                                                else
                                                {
                                                    i11++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
void twelveterms(int ac, double t1, double t2, double t3, double t4, double t5, double t6, double t7, double t8, double t9, double t10, double t11, double t12)
{
    ofstream equs;
    equs.open("equations.dat");
    auto start = chrono::steady_clock::now();
    int l = 0;
    cout << "Enter a value for the multiplier l" << endl;
    cin >> l;
    for (int i1 = -l; i1 <= l; i1++)
    {
        for (int i2 = -l; i2 <= l; i2++)
        {
            for (int i3 = -l; i3 <= l; i3++)
            {
                for (int i4 = -l; i4 <= l; i4++)
                {
                    for (int i5 = -l; i5 <= l; i5++)
                    {
                        for (int i6 = -l; i6 <= l; i6++)
                        {
                            for (int i7 = -l; i7 <= l; i7++)
                            {
                                for (int i8 = -l; i8 <= l; i8++)
                                {
                                    for (int i9 = -l; i9 <= l; i9++)
                                    {
                                        for (int i10 = -l; i10 <= l; i10++)
                                        {
                                            for (int i11 = -l; i11 <= l; i11++)
                                            {
                                                for (int i12 = -l; i12 <= l; i12++)
                                                {
                                                    double sum = i1 * t1 + i2 * t2 + i3 * t3 + i4 * t4 + i5 * t5 + i6 * t6 + i7 * t7 + i8 * t8 + i9 * t9 + i10 * t10 + i11 * t11 + i12 * t12;
                                                    if (abs(sum) < pow(10, -ac))
                                                    {
                                                        int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12;
                                                        m1 = i1; m2 = i2; m3 = i3; m4 = i4; m5 = i5; m6 = i6; m7 = i7; m8 = i8; m9 = i9; m10 = i10; m11 = i11; m12 = i12;
                                                        equs << m1 << "," << m2 << "," << m3 << "," << m4 << "," << m5 << "," << m6 << "," << m7 << "," << m8 << "," << m9 << "," << m10 << "," << m11 << "," << m12 << endl;
                                                        cout << i1 << "i1  +  " << i2 << "i2  +  " << i3 << "i3  +  " << i4 << "i4  +  " << i5 << "i5  +  " << i6 << "i6  +  " << i7 << "i7  +  " << i8 << "i8  +  " << i9 << "i9  +  " << i10 << "i10  +  " << i11 << "i11  +  " << i12 << "i12" << " == 0,";
                                                        cout << endl;
                                                    }
                                                    else
                                                    {
                                                        i12++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
       
                }

            }
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;
}
int main()
{
    cout << endl << "**************"<< "  Welcome to Hirota Search Application  " << "**************"  << endl << endl;
    cout << "***************************************************" << endl << endl;
    int n;
    cout << " Enter number of terms that you have: " << endl;
    cin >> n;
    int ac;
    cout << " Enter the accuracy that you have: " << endl;
    cin >> ac;
    if (n >= 4 && n < 12) {
        if (n == 4)
        {
            double t1, t2, t3, t4;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4;
            fourterms(ac,t1, t2, t3, t4);
        }
        else if (n == 5)
        {
            double t1, t2, t3, t4, t5;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5;
            fiveterms(ac, t1, t2, t3, t4, t5);
        }
        else if (n == 6)
        {
            double t1, t2, t3, t4, t5, t6;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6;
            sixterms(ac, t1, t2, t3, t4, t5, t6);

        }
        else if (n == 7)
        {
            double t1, t2, t3, t4, t5, t6, t7;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7;
            seventerms(ac, t1, t2, t3, t4, t5, t6, t7);
        }
        else if (n == 8)
        {
            double t1, t2, t3, t4, t5, t6, t7, t8;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8;
            eightterms(ac, t1, t2, t3, t4, t5, t6, t7, t8);
        }
        else if (n == 9)
        {
            double t1, t2, t3, t4, t5, t6, t7, t8, t9;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8 >> t9;
            nineterms(ac, t1, t2, t3, t4, t5, t6, t7, t8, t9);
        }
        else if (n == 10)
        {
            double t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8 >> t9 >> t10;
            tenterms(ac, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10);
        }
        else if (n == 11)
        {
            double t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8 >> t9 >> t10 >> t11;
            eleventerms(ac, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11);
        }
        else if (n == 12)
        {
            double t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12;
            cout << endl << endl << "Enter the values of each term : " << endl;
            cin >> t1 >> t2 >> t3 >> t4 >> t5 >> t6 >> t7 >> t8 >> t9 >> t10 >> t11 >> t12;
            twelveterms(ac, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12);
        }
    }
    else
    {
        cout << endl << endl << "You exceed the number of the allowed terms" << endl << endl;
    }
    return 0;
}
