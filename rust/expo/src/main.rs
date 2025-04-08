fn main() {
    declaration();
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