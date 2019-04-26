/**
 * Bildbasierte Modellierung SS 2019
 * Prof. Dr.-Ing. Marcus Magnor
 *
 * Betreuer: JP Tauscher (tauscher@cg.cs.tu-bs.de)
 * URL: https://graphics.tu-bs.de/teaching/ss19/bbm
 */

#include <iostream>
#include <queue>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/contrib/contrib.hpp>

using namespace cv;

/**
 * Datum: 24.4.2019
 *
 * Übungsblatt: 3
 * Abgabe: 30.4.2019
 */

/**
 * Aufgabe: Median-Filter (10 Punkte)
 * Der Median-Filter ist ein einfacher nichtlinearer Filter, der sich
 * gut eignet, um bestimmte Arten von Bildrauschen zuentfernen.
 * - Implementiere einen Median-Filter, ohne \code{medianBlur} zu verwenden.
 *
 */

/* TODO */

int main(int argc, char **argv) {

    if (argc < 2) {
        std::cerr << "usage: " << argv[0] << " <image>" << std::endl;
        exit(1);
    }


    /**
     * - Wende den Median-Filter auf ein Graustufenbild an.
     */

/* TODO */


    /**
     * - Wende den Median-Filter auf die einzelnen Kanäle eines Farbbilds an
     */


/* TODO */


    /**
     * - Wie kann man ungewollte Farbverschiebungen vermeiden?
     * - Für welche Arten von Rauschen eignet sich der Median-Filter gut, für welche nicht?
     */


    /**
     * Aufgabe: Hough-Transformation (10 Punkte)
     *
     * Die Hough-Transformation kann für das Finden von Linien in Bildern verwendet werden.
     *
     * In dieser Aufgabe sollst du die Hough-Transformation implementieren ohne die Funktionen \code{HoughLines}
     * oder \code{HoughLinesP} zu verwenden.
     */


    /**
    * - Erzeuge ein Kantenbild. Verwende dazu einen Filter deiner Wahl. Begründe die Wahl des Kantendetektors.
    */

/* TODO */

    /**
    * - Transformiere das Kantenbild in den Hough-Raum und zeige diesen in einer geeigneten Color Map an.
    */

/* TODO */

    /**
    * - Finde die markantesten Linien und zeichne diese in das Originalbild ein.
    */

/* TODO */

}
