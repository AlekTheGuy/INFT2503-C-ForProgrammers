## 2

Når jeg kjører dette programmet får jeg "Segmentation fault". Dette er fordi nullptr ikke er et gyldig del av minnet og man kan da ikke prøve å legge verdier der.

## 3

I dette programmet settes det en char liste med plass til 5 tegn, litt etter dette hentes det bruker input som skrives til denne listen. Hvis input fra bruker er lengere enn 5 tegn vil den da ha mulighet for å skrive over data som ligger "etter" text i minnet.
While løkken tar også ikke hensyn til lengden av listen og vil bevege seg videre i sitt søk etter 'e'.
