# TAREA 03. Ejercicios de estructuras en C 
Integrantes:
- Karla Guzmán
- José Vázquez
## [EJERICIO 06] 📚 Sistema de Gestión de Catálogo de Libros
¡Bienvenido/a a este sencillo pero poderoso sistema para gestionar un catálogo de libros en una biblioteca!  
Aquí podrás agregar, eliminar y visualizar libros dinámicamente mientras el programa corre.

## 🚀 ¿Cómo correr el programa?

### 1. Clona o descarga el archivo
Asegúrate de tener el archivo `Ejercicio06.c` en tu computadora.

### 2. Compila el programa
Abre tu terminal (o CMD, PowerShell, Git Bash, etc.) y navega hasta la carpeta donde guardaste `Ejercicio06.c`. Luego escribe:

```bash
gcc Ejercicio06.c -o catalogo
```

Esto creará un ejecutable llamado `catalogo` (o `catalogo.exe` en Windows).

> **¿No tienes `gcc`?**  
> Instala **MinGW** en Windows, o si estás en Linux/Mac, probablemente ya lo tienes. Si no, instala con:  
> - Ubuntu/Debian: `sudo apt install gcc`
> - Mac (con Homebrew): `brew install gcc`

### 3. Ejecuta el programa
Ahora corre el ejecutable:

```bash
./catalogo
```
o en Windows:

```bash
catalogo.exe
```

### 4. Interactúa con el sistema
Desde ahí podrás:
- ➕ **Agregar** nuevos libros
- ➖ **Eliminar** libros
- 📋 **Ver el catálogo** completo
- 🚪 **Salir** del sistema

Todo muy amigable y acompañado de mensajitos estéticos ✨.

## 📄 Requisitos

- **Compilador de C** (`gcc`, `clang`, o similar)
- **Sistema operativo**: Windows, Linux o macOS
- **Nivel de energía**: opcional pero recomendado tomar un café antes ☕️

## ⚠️ Notas importantes

- El programa maneja dinámicamente la memoria, pero recuerda cerrar el programa correctamente (usando la opción 4) para liberar los recursos.
- Si ingresas datos incorrectos (por ejemplo, una letra cuando se espera un número), el programa puede comportarse de manera inesperada. ¡Ten cuidado! 🧨
- 
## 📸 Capturas de pantalla

### MENÚ
![MENU](https://github.com/KarlaIsela/Tarea03-C/blob/main/SSEjercicio06/A.png)

### AÑADIENDO LIBROS
![AÑADIENDO LIBROS](https://github.com/KarlaIsela/Tarea03-C/blob/main/SSEjercicio06/B.png)

### MOSTRANDO LIBROS
![MOSTRANDO LIBROS](https://github.com/KarlaIsela/Tarea03-C/blob/main/SSEjercicio06/C.png)

### ELIMINANDO LIBROS
![ELIMINADO LIBROS](https://github.com/KarlaIsela/Tarea03-C/blob/main/SSEjercicio06/D.png)

### SALIENDO
![SALIENDO](https://github.com/KarlaIsela/Tarea03-C/blob/main/SSEjercicio06/E.png)

## [EJERCICIO 07] 🏥 Sistema de Gestión de Pacientes del Hospital
Este programa simula ser un sistema de control de pacientes de un hospital, donde podras agregar pacientes, eliminarlos, buscarlos e incluso ver la lista completa de pacientes existentes en el hospital.

## 🚀 ¿Cómo correr el programa?

### 1. Clona o descarga el archivo
Asegúrate de tener el archivo `Hospital.c` en tu computadora.

### 2. Compila el programa
Abre tu terminal (o CMD, PowerShell, Git Bash, etc.) y navega hasta la carpeta donde guardaste `Hospital.c`. Luego escribe:

```bash
gcc Hospital.c -o catalogo
```

Esto creará un ejecutable llamado `catalogo` (o `catalogo.exe` en Windows).

> **¿No tienes `gcc`?**  
> Instala **MinGW** en Windows, o si estás en Linux/Mac, probablemente ya lo tienes. Si no, instala con:  
> - Ubuntu/Debian: `sudo apt install gcc`
> - Mac (con Homebrew): `brew install gcc`

### 3. Ejecuta el programa
Ahora corre el ejecutable:

```bash
./catalogo
```
o en Windows:

```bash
catalogo.exe
```

### 4. Interactúa con el sistema
Desde ahí podrás:
- Agregar Nuevos pacientes
- Eliminar pacientes que fueron dados de alta
- Ver la lista completa de pacientes
- Buscar un paciente en particular
- Salir del sistema


## 📄 Requisitos

- **Compilador de C** (`gcc`, `clang`, o similar)
- **Sistema operativo**: Windows, Linux o macOS

## ⚠️ Notas importantes

- El programa maneja dinámicamente la memoria, por lo que deberas seleccionar la opcion de salir para que el programa libere los recursos ocupados 
- Si ingresas datos incorrectos deberia poder soportar algunos errores comunes, pero ey!!!, tampoco te luzcas queriendo ser el menso que truene el programa. 
- 
## 📸 Capturas de pantalla
