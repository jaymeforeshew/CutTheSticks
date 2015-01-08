#include <iostream>
#include <vector>

using namespace std;

/*
    HackerRank Problem: Cut The Sticks
    Problem Spec: hackerrank.com/challenges/cut-the-sticks

*/


int main() {
    
    // Variables
    int numSticks;
    vector< int > sticks;

    // Take in data
    cin >> numSticks;
    for( int i = 0; i < numSticks; i++ ) {
        int thisStick;
        cin >> thisStick;
        sticks.push_back( thisStick );
    }
    
    // do until no remaining sticks
    while( !sticks.empty() ) {

        cout << sticks.size() << endl;
        
        // find min
        int minVal;
        for( vector< int >::iterator it = sticks.begin(); it != sticks.end(); it++ ) {
            if( it == sticks.begin() ) {
                minVal = (*it);
                continue;
            }

            if( (*it) < minVal ) {
                minVal = (*it);
            }
        }
        
        vector< int > nextSet;
        for( vector< int >::iterator it = sticks.begin(); it != sticks.end(); it++ ) {
            int newVal = (*it) - minVal;
            if( newVal != 0 ) {
                nextSet.push_back( newVal );
            }
        }
        
        sticks = nextSet;
    }
} // main
