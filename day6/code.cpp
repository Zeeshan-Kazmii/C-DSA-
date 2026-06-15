#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " please enter number ";
    cin >> n;
    // for(int i=1; i <= n; i++ ){
    //     for( int j=1; j <= n; j++ ){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // for( int i=1; i <= n; i++){
    //     for( int j=1; j<=(n-i+1); j++){
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }
//   char a='A';
//     for( int i=1; i <= n; i++){
//         for( int j=1; j<=i; j++){
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }

// int n;
// cout << "Enter the number : ";
// cin >> n;
// for( int i=1; i<=n; i++){
//     cout << "*";
// for( int j=1; j<=n-1; j++){
//     if(i==1 || i==n){
//     cout << " *";
//     } else {
//     cout << " " << " ";
//     }
//     }
//     cout << " *" << endl;
// }

// for( int i=1; i<=n; i++){
// for( int j=1; j<=n; j++){
//     if(j <= n-i){
//     cout << " ";
//     } else {
//     cout << "*";
//     }
//     }
//     cout << endl;
// }
// int num =1;
// for( int i=1; i<=n; i++){
// for( int j=1; j<=i; j++){
//     cout << num++ << " ";
//     }
//     cout << endl;
// }

// Diamond Pattern

// for( int i = 1; i<=n; i++ ){
//     //space
//     for( int j =1; j<=(n-i); j++){
//         cout << " " << " ";
//     }
//     // stars
//     for( int j=1; j<=(2*i-1); j++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// for( int i = n; i>=1; i-- ){
//      //space
//     for( int j=1; j<=n-i; j++){
//         cout << " "<<" ";
//     }

//     //star
//     for( int j=1; j<=(2*i-1); j++){
//         cout << "* ";
//     }
   
//     cout << endl;
// }


//Butterfly pattern
for(int i=1; i<=n; i++){
    for( int j=1; j<=i; j++){
        cout << "* ";
    }
    for( int j=1; j<=(2*(n-i)); j++){
        cout << " "<<" ";
    }
    for( int j=1; j<=i; j++){
        cout << "* ";
    }
    cout << endl;
}
for(int i=n; i>=1; i--){
    for( int j=1; j<=i; j++){
        cout << "* ";
    }
    for( int j=1; j<=(2*(n-i)); j++){
        cout << " " << " ";
    }
    for( int j=1; j<=i; j++){
        cout << "* ";
    }
    cout << endl;
}

    return 0;
}