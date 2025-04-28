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


### Añadiendo un nuevo paciente
<img width="671" alt="Captura de pantalla 2025-04-28 a la(s) 4 35 26" src="https://github.com/user-attachments/assets/f6f18299-bb34-4752-82b8-d5dbe1380c3e" />

### Buscando un paciente 
<img width="535" alt="Captura de pantalla 2025-04-28 a la(s) 4 35 37" src="https://github.com/user-attachments/assets/7c8e56d3-a209-4e9a-8af8-e4bc4202a213" />

### Viendo la lista de pacientes
<img width="531" alt="Captura de pantalla 2025-04-28 a la(s) 4 35 47" src="https://github.com/user-attachments/assets/52f0455f-21c2-4b06-833f-f0812ec23288" />

### Eliminando un paciente
<img width="576" alt="Captura de pantalla 2025-04-28 a la(s) 4 35 59" src="https://github.com/user-attachments/assets/a885988a-e330-4247-9e5b-9b5e2e02068b" />

### Saliendo del sistema
<img width="528" alt="Captura de pantalla 2025-04-28 a la(s) 4 36 07" src="https://github.com/user-attachments/assets/187eb96a-faa1-451a-be9b-49721dac9899" />
