# ®️ Rust
## 5️⃣ Constantes nombradas e inicialización de variables

Existen dos maneras de inicializar 'variables' en rust...

**Constantes:**
- Las constantes se definen con la **palabra reservada `const`**.
- Debe tener un **tipo explícito obligatorio**.
- Su nombre deberia ser en **mayusculas**.
- Su valor tiene que ser inicializado con una expresion constante conocida en **tiempo de compilacion**.

**Variables:**
- Las variables se definen con la **palabra reservada `let`**.
- Se pueden declarar variables **mutables (`let mut`)** e **inmutables (`let`)**.
- El **tipo explicito no es obligatorio**, Rust intentara inferirlo.
- Su valor puede ser cualquier valor computado ya que se asigna en **tiempo de ejecucion**.

Para ambos casos se usa por convencion el formato **snake_case**.

### 🆚 Comparación con C, Java y Python

**©️ Lenguaje C**

**Constantes**
- `#define`: constante por preprocesador (no tiene tipo, errores potenciales).
- `const`: constante compilada (no se garantiza seguridad si se usa con punteros).

**Variables**
- Las variables son mutables por defecto.
- Siempre se debe declarar el tipo.

```c
// CONSTANTES
#define PI 3.1415
const int x = 10;

// VARIABLES
int x = 5;
float y = 3.14f;
```

**☕ Lenguaje Java**

**Constantes**
- `final`: Constante de tipado fuerte, se debe inicializar al declararlo.

**Variables**
- Tipado estatico y obligatorio.
- Mutables por defecto.

```java
public class Main {
    // Constante en una clase
    public static final double PI = 3.1415;

    public static void main(String[] args) {
        // Constante en una funcion
        final int x = 10;

        // Variables
        int x = 5;
        double y = 3.14;
    }
}
```

**🐍 Lenguaje Python**

- No existen constantes reales, solo convención de estilo (Mayusculas).

```python
# 'Constante'
PI = 3.1415

# Variables
x = 5
y = 3.14
```
---

## 6️⃣ Tipos de datos primitivos, cadenas y definidos por el usuario

**Tipos primitivos**

Numeros enteros
- Con signo: `i8`, `i16`, `i32`, `i64`, `i128`, `isize`
- Sin signo: `u8`, `u16`, `u32`, `u64`, `u128`, `usize`

Numeros de punto flotante
- `f32`, `f64`

(El numero representa la cantidad de bits que ocupa en memoria)

|Tipo|Tamaño|Rango de valores|
|----|------|----------------|
|i8|8 bits|-128 a 127|
|u8|8 bits|0 a 255|
|i16|16 bits|-32,768 a 32,767|
|u16|16 bits|0 a 65,535|
|i32|32 bits|-2,147,483,648 a 2,147,483,647|
|u32|32 bits|0 a 4,294,967,295|
|i64|64 bits|-2⁶³ a 2⁶³ - 1|
|u64|64 bits|0 a 2⁶⁴ - 1|
|i28|128 bits|-2¹²⁷ a 2¹²⁷ - 1|
|u128|128 bits|	0 a 2¹²⁸ - 1|

Booleanos
- `true`, `false`

Caracteres
- `char`, Representa un solo caracter unicode.

Tuplas
- Agrupan valores de distintos tipos `tup: (i32, f64, u8)`.

Arrays
- Lista de valores del mismo tipo y tamaño fijo `arr: [i32; 3]`.

**Cadenas**

&str (string slice)
- Inmutable y generalmente se usa para cadenas literales `s: &str`.

String
- Tipo dinamico `s: String::From('')`

**Tipos definidos por el usuario**

Structs
- Estructuras personalizadas con multiples campos.

Enums
- Enumeraciones para representar opciones.

Type Aliases
- Alias para tipos complejos `type ID = u32`.

### 🆚 Comparacion con C, Java y Python

**©️ Lenguaje C**

- Primitivos: `int`, `short`, `long`, `unsigned int`, `float`, `double`, `char` (ASCII), `bool` (Requiere `<stdbool.h>`)
- Cadenas: Arreglos de char `char[]`
- Tipos definidos: `struct`, `enum`

```c
struct Persona {
    char nombre[50];
    int edad;
};

enum nombreEnum {
    VALOR1,
    VALOR2,
    VALOR3
};
```

**☕ Lenguaje Java**

- Primitivos: `byte`, `short`, `int`, `long`, `float`, `double`, `boolean`, `char` (UTF-16, admite unicode basico)
- Cadenas: `String` (Inmutable), `StringBuilder` o `StringBuffer` (Mutables)
- Tipos definidos: `class`, `enum`

```java
class Persona {
    String nombre;
    int edad;
}

enum Dia {
    LUNES,
    MARTES,
    MIERCOLES
}
```

**🐍 Lenguaje Python**

- Tipos: `int`, `float`, `bool`, `str` (De un solo caracter)
- Cadenas: `str`
- Tipos definidos: `class`, `enum`

```python
class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

class Dia(Enum):
    Lunes = 1
    Martes = 2
    Miercoles = 3
```
---