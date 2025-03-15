# Conversor de Divisas

Un programa simple en C que permite convertir entre diferentes monedas (USD, EUR y GTQ).

## 🚀 Cómo Usar

1. Compile el programa usando un compilador de C:
      gcc currency_converter.c -o currency_converter
   

2. Ejecute el programa:
      ./currency_converter
   

3. Siga las instrucciones en pantalla:
   * Ingrese la cantidad que desea convertir
   * Seleccione la moneda de origen (1-3)
   * Seleccione la moneda de destino (1-3)

### Monedas Disponibles
1. USD (Dólar Estadounidense)
2. EUR (Euro)
3. GTQ (Quetzal Guatemalteco)

## 🔧 Funcionamiento Interno

### Estructura del Programa

El programa está organizado en varias funciones principales:

- get_user_amount(): Solicita y valida el monto a convertir
- get_user_currency(): Maneja la selección de monedas
- get_rate(): Determina la tasa de cambio entre monedas
- print_result(): Muestra el resultado de la conversión

### Tasas de Cambio
Las tasas de cambio están predefinidas en el código:

| De  | A   | Tasa    |
|-----|-----|---------|
| USD | EUR | 0.89    |
| USD | GTQ | 7.70    |
| EUR | USD | 1.09    |
| EUR | GTQ | 8.40    |
| GTQ | USD | 0.13    |
| GTQ | EUR | 0.12    |

### Validaciones

- El programa verifica que el monto ingresado sea un número válido
- La selección de moneda debe estar entre 1 y 3
- Si se ingresa una opción inválida, el programa solicita nuevamente el dato

### Constantes Definidas

- USD: Identificador para dólar estadounidense (1)
- EUR: Identificador para euro (2)
- GTQ: Identificador para quetzal guatemalteco (3)
- MIN_CURRENCIES: Valor mínimo válido para selección de moneda
- MAX_CURRENCIES: Valor máximo válido para selección de moneda