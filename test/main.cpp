//
// Created by dodo on 01/06/18.
//

#include "../MersenneTwister.hpp"

int main() {
    MersenneTwister twister;

    double d;
    d = twister.d_random();
    d = twister.d_random(1);
    d = twister.d_random(10e1);
    d = twister.d_random(10e2);
    d = twister.d_random(10e3);
    d = twister.d_random(10e4);
    d = twister.d_random(10e5);
    d = twister.d_random(10e6);
    d = twister.d_random(10e7);
    d = twister.d_random(10e8);
    d = twister.d_random(10e-1);
    d = twister.d_random(10e-2);
    d = twister.d_random(10e-3);
    d = twister.d_random(10e-4);
    d = twister.d_random(10e-5);
    d = twister.d_random(10e-6);
    d = twister.d_random(10e-7);
    d = twister.d_random(10e-8);
    d = twister.d_random(0, 1);
    d = twister.d_random(-4.13, -2.691);
    d = twister.d_random(1, 0);
    d = twister.d_random(-7, 7);
    d = twister.d_random(-2.691, -4.13);

    int i;
    i = twister.i_random();
    i = twister.i_random(1);
    i = twister.i_random(10e1);
    i = twister.i_random(10e2);
    i = twister.i_random(10e3);
    i = twister.i_random(10e4);
    i = twister.i_random(10e5);
    i = twister.i_random(10e6);
    i = twister.i_random(10e7);
    i = twister.i_random(10e8);
    i = twister.i_random(10e-1);
    i = twister.i_random(10e-2);
    i = twister.i_random(10e-3);
    i = twister.i_random(10e-4);
    i = twister.i_random(10e-5);
    i = twister.i_random(10e-6);
    i = twister.i_random(10e-7);
    i = twister.i_random(10e-8);
    i = twister.i_random(0, 1);
    i = twister.i_random(-4, -2);
    i = twister.i_random(1, 0);
    i = twister.i_random(-7, 7);
    i = twister.i_random(-2, -4);

    d = twister.n_random();
    d = twister.n_random(0, 1);
    d = twister.n_random(500, 100);
    d = twister.n_random(1, 0);
    d = twister.n_random(100, 500);

    vector<int> v;
    v = twister.randomValues(0, 10, 10, false);
    v = twister.randomValues(0, 10, 10, true);
    v = twister.randomValues(0, 10, 11, true);

    v = twister.randomValues(0, 1, 1, true);
    v = twister.randomValues(0, 0, 1, true);
    v = twister.randomValues(1, 1, 1, true);

    v = twister.randomValues(0, 1, 1, false);
    v = twister.randomValues(0, 0, 1, false);
    v = twister.randomValues(1, 1, 1, false);

    v = twister.randomValues(0, 1, 0, false);
    v = twister.randomValues(0, 0, 0, false);
    v = twister.randomValues(1, 1, 0, false);

    vector<double> v2;
    v2 = twister.vecFromNormal(10);
    v2 = twister.vecFromNormal(10e7);
    v2 = twister.vecFromNormal(0);

    v2 = twister.vecFromNormal(10, 500, 100);
    v2 = twister.vecFromNormal(10e7, 500, 100);
    v2 = twister.vecFromNormal(0, 500, 100);

    v2 = twister.vecFromUniform(10);
    v2 = twister.vecFromUniform(10e7);
    v2 = twister.vecFromUniform(0);

    v2 = twister.vecFromUniform(10, 500, 100);
    v2 = twister.vecFromUniform(10e7, 500, 100);
    v2 = twister.vecFromUniform(0, 500, 100);

    return 0;
}
