#include <iostream>
#include <string>
#include <cstdlib> // Para rand() y srand()
#include <ctime> // Para inicializar srand()
#include <cstring>
#include <fstream>

using namespace std;

enum Tipo { LAPTOP = 1, TABLET, TELEFONO };

union Detalle {
    char sistemaOperativo[20];      // Para LAPTOP y TABLET
    char companiaTelefonica[20];    // Para TELEFONO
};

struct Dispositivo {
    string nombre;
    float precio;
    Tipo tipo;
    Detalle extra;
};

// Prototipos
void imprimirDispositivo(const Dispositivo& d);
void imprimirTodos(Dispositivo dispositivos[], int n);
void generarDispositivos(Dispositivo dispositivos[], int n);
void guardarEnArchivo(Dispositivo dispositivos[], int n);
void leerDesdeArchivo();
void buscarPorTipo(Dispositivo dispositivos[], int n);
void buscarPorNombre(Dispositivo dispositivos[], int n);
void conteoPorTipo(Dispositivo dispositivos[], int n);

int main() {
    // Aquí irá el arreglo y las funciones que el estudiante implemente.
    const int cantidad = 5; 
    Dispositivo dispositivos[cantidad];

    generarDispositivos(dispositivos, cantidad);
    imprimirTodos(dispositivos, cantidad);
    guardarEnArchivo(dispositivos,cantidad);
    cout << "\nLectura\n\n";
    leerDesdeArchivo();
    buscarPorTipo(dispositivos,cantidad);
    buscarPorNombre(dispositivos,cantidad);
    conteoPorTipo(dispositivos,cantidad);
    return 0;
}

void imprimirDispositivo(const Dispositivo& d) {
    cout << "Nombre: " << d.nombre << endl;
    cout << "Precio: " << d.precio << endl;

    switch(d.tipo) {
        case LAPTOP:
            cout << "Tipo: Laptop" << endl;
            cout << "Sistema Operativo: " << d.extra.sistemaOperativo << endl;
            break;
        case TABLET:
            cout << "Tipo: Tablet" << endl;
            cout << "Sistema Operativo: " << d.extra.sistemaOperativo << endl;
            break;
        case TELEFONO:
            cout << "Tipo: Telefono" << endl;
            cout << "Compania Telefonica: " << d.extra.companiaTelefonica << endl;
            break;
    }

    cout << "---------------------------" << endl;
}

void imprimirTodos(Dispositivo dispositivos[], int n) {
    for (int i = 0; i < n; ++i) {
        imprimirDispositivo(dispositivos[i]);
    }
}

void generarDispositivos(Dispositivo dispositivos[], int n) {
    srand(time(0)); // Inicializa la semilla para números aleatorios

    // Arreglos con nombres predefinidos para cada tipo
    string nombresLaptops[] = {"ThinkPad", "MacBook", "Surface Laptop", "Dell XPS", "HP Spectre"};
    string nombresTablets[] = {"iPad", "Galaxy Tab", "Surface Pro", "Lenovo Tab", "Huawei MatePad"};
    string nombresTelefonos[] = {"iPhone", "Galaxy S", "Pixel", "Xperia", "Huawei P"};

    const int totalLaptops = sizeof(nombresLaptops) / sizeof(nombresLaptops[0]);
    const int totalTablets = sizeof(nombresTablets) / sizeof(nombresTablets[0]);
    const int totalTelefonos = sizeof(nombresTelefonos) / sizeof(nombresTelefonos[0]);

    int laptopsGenerados = 0, tabletsGenerados = 0, telefonosGenerados = 0;

    for (int i = 0; i < n; ++i) {
        if (laptopsGenerados < n / 3) {
            // Generar dispositivo tipo LAPTOP
            dispositivos[i].nombre = nombresLaptops[laptopsGenerados % totalLaptops];
            dispositivos[i].precio = (rand() % 10000) / 100.0f;
            dispositivos[i].tipo = LAPTOP;
            strcpy(dispositivos[i].extra.sistemaOperativo, (rand() % 2 == 0) ? "Windows" : "Linux");
            laptopsGenerados++;
        } else if (tabletsGenerados < n / 3) {
            // Generar dispositivo tipo TABLET
            dispositivos[i].nombre = nombresTablets[tabletsGenerados % totalTablets];
            dispositivos[i].precio = (rand() % 10000) / 100.0f; // Precio aleatorio
            dispositivos[i].tipo = TABLET;
            strcpy(dispositivos[i].extra.sistemaOperativo, (rand() % 2 == 0) ? "Android" : "iOS");
            tabletsGenerados++;
        } else {
            // Generar dispositivo tipo TELEFONO
            dispositivos[i].nombre = nombresTelefonos[telefonosGenerados % totalTelefonos];
            dispositivos[i].precio = (rand() % 10000) / 100.0f; // Precio aleatorio
            dispositivos[i].tipo = TELEFONO;
            strcpy(dispositivos[i].extra.companiaTelefonica, (rand() % 2 == 0) ? "Movistar" : "Telcel");
            telefonosGenerados++;
        }
    }
}

void guardarEnArchivo(Dispositivo dispositivos[], int n){
    fstream archivo;
    archivo.open("inventario.txt", ios::out|ios::app); 

    if (!archivo) {
        cerr << "Error al abrir el archivo para escritura." << endl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        archivo << "Nombre: " << dispositivos[i].nombre << endl;
        archivo << "Precio: " << dispositivos[i].precio << endl;

        switch (dispositivos[i].tipo) {
            case LAPTOP:
                archivo << "Tipo: Laptop" << endl;
                archivo << "Sistema Operativo: " << dispositivos[i].extra.sistemaOperativo << endl;
                break;
            case TABLET:
                archivo << "Tipo: Tablet" << endl;
                archivo << "Sistema Operativo: " << dispositivos[i].extra.sistemaOperativo << endl;
                break;
            case TELEFONO:
                archivo << "Tipo: Telefono" << endl;
                archivo << "Compania Telefonica: " << dispositivos[i].extra.companiaTelefonica << endl;
                break;
        }

        archivo << "---------------------------" << endl;
    }

    archivo.close(); // Cierra el archivo
}

void leerDesdeArchivo(){
    fstream archivo;
    archivo.open("inventario.txt", ios::in); 

    if (!archivo) {
        cerr << "Error al abrir el archivo para lectura." << endl;
        return;
    }
    archivo.clear();
    archivo.seekg(0);
    string linea;
    cout << "Dispositivos leidos desde el archivo:" << endl;
    cout << "-------------------------------------" << endl;

    while (getline(archivo, linea)) {
        cout << linea << endl; // Imprime cada línea del archivo
    }

    archivo.close(); // Cierra el archivo
}

void buscarPorTipo(Dispositivo dispositivos[], int n){
    int tipoBuscado;
    cout << "Ingrese el tipo de dispositivo a buscar (1 = LAPTOP, 2 = TABLET, 3 = TELEFONO): ";
    cin >> tipoBuscado;

    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (dispositivos[i].tipo == tipoBuscado) {
            imprimirDispositivo(dispositivos[i]);
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontraron dispositivos de este tipo." << endl;
    }
}

void buscarPorNombre(Dispositivo dispositivos[], int n){
    string nombreBuscado;
    cout << "Ingrese el nombre exacto del dispositivo a buscar: ";
    cin.ignore();
    getline(cin, nombreBuscado); 

    bool encontrado = false;
    for (int i = 0; i < n; ++i) {
        if (dispositivos[i].nombre == nombreBuscado) {
            imprimirDispositivo(dispositivos[i]);
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontró ningún dispositivo con el nombre \"" << nombreBuscado << "\"." << endl;
    }
}

void conteoPorTipo(Dispositivo dispositivos[], int n){
    int totalLaptops = 0, totalTablets = 0, totalTelefonos = 0;

    for (int i = 0; i < n; ++i) {
        switch (dispositivos[i].tipo) {
            case LAPTOP:
                totalLaptops++;
                break;
            case TABLET:
                totalTablets++;
                break;
            case TELEFONO:
                totalTelefonos++;
                break;
        }
    }

    cout << "\nConteo de dispositivos por tipo:" << endl;
    cout << "---------------------------------" << endl;
    cout << "Laptops: " << totalLaptops << endl;
    cout << "Tablets: " << totalTablets << endl;
    cout << "Telefonos: " << totalTelefonos << endl;
}