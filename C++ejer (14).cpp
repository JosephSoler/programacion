#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Crear una ventana
    QWidget window;
    window.setWindowTitle("Ejemplo de Interfaz Gráfica con Qt");
    window.setGeometry(100, 100, 300, 200); // (x, y, ancho, alto)

    // Crear un botón
    QPushButton button("Haz clic aquí", &window);
    button.setGeometry(100, 50, 100, 30);

    // Conectar una función al evento clicked() del botón
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QMessageBox::information(&window, "Mensaje", "¡Hiciste clic en el botón!");
    });

    // Mostrar la ventana y ejecutar la aplicación
    window.show();
    return app.exec();
}

