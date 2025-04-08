use std::io;

fn main() {
    println!("Ingresa un número:");

    let mut entrada = String::new();

    io::stdin()
        .read_line(&mut entrada)
        .expect("Error al leer la entrada");

    let numero: i32 = entrada.trim().parse().expect("Por favor ingresa un número válido");

    println!("Ingresaste el número: {}", numero);
}