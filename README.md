1. Kalkulator długości tekstu 
Opis

Program pobiera od użytkownika tekst i oblicza jego długość za pomocą własnej funkcji my_strlen.

Program poprawnie uwzględnia znak nowej linii (\n), który jest wprowadzany po naciśnięciu Enter.

int my_strlen(const char s[]) — zlicza liczbę znaków w ciągu tekstowym do znaku końca stringa \0.

Kompilacja i uruchomienie
gcc my_strlen.c -o my_strlen
./my_strlen

2. Aplikacja bankowa 
Opis

Program symuluje prostą aplikację bankową z menu:

Wpłata na konto

Wypłata z konta

Wyświetlenie salda konta

Wyjście

Program używa tablicy saldo do przechowywania stanów kont. Wszystkie operacje są wydzielone do osobnych funkcji, dzięki czemu funkcja main pozostaje czytelna i przejrzysta.

Kompilacja i uruchomienie
gcc bank_v2.c -o bank_v2
./bank_v2

Cechy

Użycie stałej MAX_ACCOUNTS do określenia liczby kont.

Walidacja danych wejściowych (niepoprawne znaki, ujemne kwoty).

Brak zmiennych globalnych.

Każda operacja jest wydzielona do osobnej funkcji, co zwiększa czytelność kodu.



