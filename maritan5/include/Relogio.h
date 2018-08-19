#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    public:
        void setHorario(int hora, int minuto, int segundo);
        void avancarHorario(int hora, int minuto, int segundo);
        int getHora();
        int getMinuto();
        int getSegundo();

    private:
        int hora, minuto, segundo;
};

#endif // RELOGIO_H
