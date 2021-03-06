// Attribute yang ada pada trapesium :
s = sisi
t = tinggi
typedef struct{
    int s1;
    int s2
    int t;
} Trapesium;


// Constructor trapesium
Trapesium initTrapeium(int s1, int s2, int t){
    Trapesium tr;
    tr.s1=s1;
    tr.s2=s2
    tr.t=t;
    return tr;
}
// Nama constructor adalah 'initTrapesium'
// Constructor ini digunakan untuk membuat instance trapesium baru dan menginisialisasi nilai trapesium.
// Parameter constructor adalah attribute dari trapesium.
// Cara untuk mengakses attribute dari struct adalah dengan menggunakan tanda titik (.)


// Mutator trapesium
void ubahTrapesium(Trapesium *tr, int s1, int s2 ,int t){ 
    (*tr).s1=s1;
    (*tr).s2=s2;
    (*tr).t=t;
}
// Nama prosedur tersebut adalah ’ubahTrapesium’
// Prosedur ini digunakan untuk mengubah nilai attribute trapesium
// Parameter yang digunakan adalah struct Trapesium, nilai sisi yang baru, dan nilai tinggi yang baru.


// Accessor Trapesium
int getLuas(Trapesium tr){
    return ((s1+s2)*t) / 2;
}
// Fungsi tersebut digunakan untuk mengitung luas trapesium
// Fungsi 'getLuas' digunakan untuk mengembalikan nilai hasil perhitungan luas.
// Parameter yang digunakan adalah struct Trapesium.