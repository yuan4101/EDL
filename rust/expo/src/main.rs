fn main() {
    declaration();
    primitivos();
}

fn declaration(){
    // 1. Declaracion constante correcta
    const VAR_CONSTANTE: i8 = 0;
    //VAR_CONSTANTE = 10;   // Error: No se puede cambiar su valor
    println!("VAR_CONSTANTE: {}", VAR_CONSTANTE);

    // 2. Declaracion constante en minusculas
    const var_constante1: i8 = 1;
    println!("var_constante1: {}", var_constante1);

    // 3. Declaracion constante sin tipo (isize, usize, f32, f64, bool)
    //const var_constante2 = 2;

    // 4. Declaracion constante con valor calculado en tiempo de ejecucion
    //let a = 1;
    //let b = 2;
    //const VAR_CONSTANTE3: i8 = a + b;

    // 5. Declaracion constante con valor calculado en tiempo de compilacion
    const VAR_CONSTANTE4: i8 = 2 + 2;
    println!("VAR_CONSTANTE4: {}", VAR_CONSTANTE4);

    // 6. Declaracion variable inmutable correcta
    let var_inmutable = 1;  //1.1, '', true
    //var_inmutable = 10;   // Error: No se puede cambiar su valor
    println!("var_inmutable: {}", var_inmutable);

    // 7. Declaracion variable inmutable calculada
    let a = 1;
    let b = 2;
    let var_inmutable1 = a + b;
    println!("var_inmutable1: {}", var_inmutable1);

    // 8. Declaracion variable mutable correcta
    let mut var_mutable= 1;
    println!("(Before) var_mutable: {}", var_mutable);
    var_mutable = 10;
    println!("(After) var_mutable: {}", var_mutable);

    // 9. Declaracion variable mutable calculada correcta
    let a = 6;
    let b = 14;
    let mut var_mutable1 = a + b;
    println!("(Add) var_mutable1: {}", var_mutable1);
}

fn primitivos(){
    #![allow(warnings)]
    // 1. Números enteros con signo
    let a: i8 = -128;
    let b: i16 = 32000;
    let c: i32 = -2_147_483_648;
    let d: i64 = 9_223_372_036_854_775_807;
    let e: i128 = -170_141_183_460_469_231_731_687_303_715_884_105_728;

    // 2. Números enteros sin signo
    let f: u8 = 255;
    let g: u16 = 65_535;
    let h: u32 = 4_294_967_295;
    let i: u64 = 18_446_744_073_709_551_615;
    let j: u128 = 340_282_366_920_938_463_463_374_607_431_768_211_455;

    // 3. Problema de inferencia entero
    //let e1 = -170_141_183_460_469_231_731_687_303_715_884_105_728;

    // 4. Números de punto flotante
    let pi: f32 = 3.14159;
    let gravedad: f64 = 9.80665;

    // 5. Punto flotante con comma ','
    //let pi2 = 3,1416;

    // 6. Booleanos
    let es_bool: bool = true;

    // 7. Booleanos con 0 y 1;
    //let varFalse: bool = 0;
    //let varTrue: bool = 1;

    // 8. Caracteres (Unicode)
    let letra: char = 'R';
    let emoji: char = '🚀';

    // 9. Char con mas 1 caracter
    //let char2: char = 'ab';

    // 10. &str: cadena inmutable
    let saludo: &str = "Hola";

    // 11. &str comilla simple
    //let saludo1: &str = 'Hola';

    // 11. Inferencia &str
    let saludo2 = "Hola";

    // 12. String: cadena dinámica
    let nombre: String = String::from("Juan Ante");

    // 13. String comilla simple
    //let nombre1: String = String::from('Juan Ante');

    // 14. String sin alloc
    //let nombre2: String = "Juan Ante";

    // 15. Declarar Struct
    struct Persona {
        nombre: String,
        edad: u8,
    }

    // 15. Variable Persona
    let persona = Persona {
        nombre: String::from("Natalia"),
        edad: 25,
    };
    println!("{} tiene {} años", persona.nombre, persona.edad);

    // 17. Enum
    enum Direccion {
        Norte,
        Sur,
        Oriente,
        Occidente,
    }

    // 18. Variable Enum
    let rumbo = Direccion::Norte;
    match rumbo {
        Direccion::Norte => println!("Norte"),
        Direccion::Sur => println!("Sur"),
        Direccion::Oriente => println!("Oriente"),
        Direccion::Occidente => println!("Occidente"),
    }

    // 19. Type alias
    type ID = u32;
    let usuario_id: ID = 1001;
    println!("El ID del usuario es: {}", usuario_id);
}