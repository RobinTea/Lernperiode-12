# Lernperiode-12

07.11.2025 - 19.12.2025

## Technologie C++ <br>
In dieser Lernperiode möchte ich einen C++ DeepDive machen, 7 Wochen werde ich nun an diesem Skill arbeiten. Ich habe gehört, dass C++ die schnellste Porgrammiersprache sei. Bis jetzt kenne ich nur Python und C# und ich möchte meine Kompetenzen erweitern.

<br>

Edit: Der Grund warum C++ schneller als zB. Python ist, ist dass der Weg wie sie ausgeführt werden anderst ist. CPP wrid zusammen gestellt dann erst ausgeführt im gegensatz zu Python die Linie zu Linie gelesen und Ausgeführt wird

## Projekt <br>
Ich werde den ganzen https://adventofcode.com/ 2025 auf C++ versuchen zu lösen um meine Fähigkeiten zu verbessern

epics: <br>
- Als HR Mitarbeiter möchte ich sehen was diese Person kann, damit ich ihn einschätzen kann. <br>
- Als HR Mitarbeiter möchte ich erkennen ob die Person gut mit neuen Technologien umgehen kann, damit ich weiss ob ich ihn einstellen sollte. <br>
- Als HR Mitarbeiter möchte ich Code der Person sehen , damit ich ihn einschätzen kann. <br>
- Als Schüler möchte ich meine Fähigkeiten erweitern, damit ich etwas mehr auf meiner Bewerbung habe. <br>
- Als Schüler möchte ich Adventofcode einmal erfolgreich erarbeiten, damit ich Code ohne unterstützung von KI vorzeigen kann. <br>
- Als Schüler möchte ich mich auf 24 bestimmte Aufgaben vorbereiten, damit ich sie meistern kann. <br>


## 07.11

https://www.youtube.com/watch?v=DMWD7wfhgNY&list=PLnKe36F30Y4ZDNIOZ51sX25pWKQ1pkpTE <br>
~https://www.youtube.com/watch?v=mUQZ1qmKlLY~ <- rech alt und eher für Anfänger, daher das obere

- [x]  Projektantrag schreiben
- [x] C++ für vsc einrichten
- [x] Variable and Datatypes
- [x] Type conversion


## 14.11

*Code im Ordner*

- [x] Arithmetic Operations / increment decrement
- [x] if else / Boolean
- [x] user inputs
- [ ] Arrays

Heute habe ich die Mathematische Operationen und if else clauses angeschaut. Ausserdem konnte ich die Funktionen von einer main file starten. Ich denke ich habe genug 


## 21.11

Um ein Fertiges Projekt in dieser Lernperiode vorzeigen zu können, werde ich mit den Technologien einen Taschenrechner in C++ programmieren. Nichts kompliziertes, dass ich mindestens ein Abgeschlossenes Projekt habe.
<br> Das nächste Mal ist die letzte Vorbereitungsphase für AdventOfCode, ich werde anschauen wie ich files lesen und verarbeiten kann (zB. in einer Array einfügen).

- [x] Calculator in Terminal

<br>

- [x] Plus, Minus, Multiplikation und Division
- [x] Switch / Case
- [x] Muss Kommastellen erlauben
- [x] Muss Fehler catchen können


## 28.11

Ich arbeite an https://adventofcode.com/2024 vom letzten Jahr.

## 05.12.25

Advent of Code 2025 hat begonnen und ich werde heute die erste Aufgabe Lösen.

Aufgabe:
Es gibt eine Drehscheibe von 0-99. Wieviel Mal sie gedereht wird, steht in der Input Datei. Jedes Mal wenn sie auf Null stehen bleibt, muss das gezählt werden. Das Totale davon, ist das Passwort. 

Info:
Drehscheibe startet bei 50.

input example:
L68
L30
R48
L5
R60


Pseudocode:
```
input string txt
var int dial 50
var int passcode

for each line in txt

if L
remove L - convert int num
minus in dial of amount txt

for num i 	//loop

if dial < 0
+99

else R
remove R - convert int
plus in dial of amount txt
if dial > 99
-99

if dial = 0
passcode++
```

Ich hatte schwierigkeiten die Buchstaben von den Nummern zu trennen. Jetzt wo ich nochmal überlege hätte ich einfach den ersten char entfernen können, habe aber folgenden Code benutzt.
        
        //remove letter in list num
        num.erase( 
            remove_if(num.begin(), num.end(), ::isalpha),
            num.end()
        );
Der Rest des Codes ist im Advent of Code Ordner.

