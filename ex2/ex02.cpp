/**
	* Bildbasierte Modellierung SS 2019
 * Prof. Dr.-Ing. Marcus Magnor
 *
 * Betreuer: JP Tauscher (tauscher@cg.cs.tu-bs.de)
 * URL: https://graphics.tu-bs.de/teaching/ss19/bbm
 */

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/contrib/contrib.hpp>

using namespace cv;

/**
 * Datum: 17.4.2019
 *
 * Übungsblatt: 2
 * Abgabe: 23.4.2019
 */

int main(int argc, char **argv) {

    if (argc < 2) {
        std::cerr << "usage: " << argv[0] << " <image>" << std::endl;
        exit(1);
    }

    /**
     * Aufgabe: 2D-Operationen auf Bildern (5 Punkte)
     *
     * In der Vorlesung wurde gezeigt, das große Bereiche natürlicher Bilder
     * homogen sind, die meisten Informationen über ein Bild jedoch in den
     * Kanten und Diskontinuitäten zu finden sind. In disem Übungsblatt soll
     * es darum gehen, Kanten und herausragende Punkte in Bildern zu finden.
     *
     * Häufige Grundlage der Verarbeitung von Bildern ist das Anwenden von
     * Filtern.  Es entspricht der Faltung (engl. \emph{convolution}) des
     * Bildes mit einem Filterkern. Filterkerne werden zu sehr verschiedenen
     * Zwecken eingesetzt.
     *
     * - Skizziere (auf Papier) eine eindimensionale Gaußfunktion mit
     *   Mittelwert $\mu$ und Varianz $\sigma^2$.  Was ist die
     *   Fourier-Transformation einer Gaußfunktion?
     * - Lade ein Testbild und wandle es anschließend in ein Grauwertbild mit
     *   float-Werten in $[0, 1]$ um.
     */

/* TODO */

    /**
     * - Falte ein verrauschtes Testbild mit Gaußfunktionen verschiedener
     *   Varianzen. Was passiert? Welchen Einfluss hat die Kernelgröße?
     */

/* TODO */

    /**
     * - Betrachte die Differenzen zweier gaußgefilterter Bilder (evt.
     *   skalieren). Wie sind die Nulldurchgänge zu interpretieren?
     */

/* TODO */

    /**
     * Aufgabe: Diskrete Ableitungen (5 Punkte)
     *
     * Mathematisch sind Ableitungen nur für stetige Funktionen definiert.  Da
     * ein Bild nur pixelweise, d.h. an diskreten Stellen, Informationen
     * liefert, kann man Ableitungen von Bildern nicht direkt bestimmen.  Eine
     * naheliegene Approximation der Ableitung ist der Differenzenquotient.
     * Sei $f:\Omega \subset \mathbb{R} \to \mathbb{R}$ eine Funktion.  Dann
     * ist der Differenzenquotient $D_h(x) = \frac{f(x+h) - f(x)}{h}$ eine
     * Approximation an $f'(x)$ für hinreichend kleines h. Für
     * differenzierbare Funktionen liefert allerdings die zentrale Differenz
     * \begin{equation}
     * D(x) = \frac{f(x+h) - f(x-h)}{2h}
     * \end{equation}
     * eine deutlich bessere Approximation (siehe auch \emph{Numerical Recipes
     * in C} von Press et al., Chapter 5).
     *
     * - Bestimme je einen diskreten Faltungskern, der die zentrale Differenz
     *   pro Bildachse approximiert.
     */

/* TODO */

    /**
     * - Implementiere diskretes Differenzieren als Faltung und
     *   wende es auf ein glattes Testbild an. Was passiert, wenn du ein
     *   verrauschtes Testbild verwendest?
     */

/* TODO */

    /**
     * - Verwende in der Implementierung nun Faltung mit dem Sobel-Operator
     *   (\code{Sobel}) und beobachte die Ergebnisse auf dem verrauschten
     *   Testbild.
     */

/* TODO */

    /**
     * Aufgabe: Features (10 Punkte)
     *
     * Kanten in Bildern werden häufig als Intensitätssprünge beschrieben.
     *
     * - Berechne den Betrag des Gradienten eines Testbildes und bestimme
     *   Schwellwerte des Gradienten, um möglichst alle Kanten zu entdecken
     *   oder möglichst nur stark ausgeprägte Kanten zu entdecken.
     */

/* TODO */

    /*
     * - Vergleiche mit dem Ergebnis des Canny-Kantendetektors
     *   (\code{Canny}), wenn er mit diesen Parametern aufgerufen wird.
     */

/* TODO */

    /**
     * Einzelne herausragende Punkte werden auch als Featurepunkte oder Ecken
     * bezeichnet, selbst wenn sie nicht auf einer Kante liegen.
     *
     * - Implementiere die Harris-Corner Detektion. Verwende dabei nicht die
     *   OpenCV Methode \code{cornerHarris}, sondern implementiere selbst eine
     *   Funktion, die ein Grauwertbild, einen Parameter $k$ für die Berechnung
     *   des Featureindikators und einen Schwellwert $t$ für ausreichend großen
     *   Ausschlag des Indikators entgegennimmt und die Featurepunkte
     *   zurückgibt.
     */

/* TODO */

    /**
    * - Zeige die Werte des Detektors vor der Segmentierung mit dem Schwellwert $t$ unter Verwendung
    *   einer geigneten Color Map (\code{applyColorMap}) mit geeigneter Skalierung.
    */

/* TODO */

    /**
     * - Zeichne einen Kreis um jede gefundene Harris-Corner.
     */

/* TODO */
}
