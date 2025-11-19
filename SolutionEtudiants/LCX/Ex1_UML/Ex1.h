#ifndef Ex1_h
#define Ex1_h

class FormesGeometriques;

class Ex1 {

 public:

    void main();

    int ChoisirForme();

    void newOperation(int CodeForme);

    void ExecuterLesCalculs(int CodeForme);

    void AfficherResultats(int CodeForme);

 public:
    int CodeFormeChoisie;

 public:

    /**
     * @element-type FormesGeometriques
     */
    FormesGeometriques *myFormesGeometriques;
};

#endif // Ex1_h
