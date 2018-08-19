#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        void aumentaVolume();
        void diminuiVolume();
        void aumentaCanal();
        void diminuiCanal();
        int getVolume();
        void setCanal(int canal);
        int getCanal();

    private:
        int volume=0;
        int canal;
};

#endif // TELEVISAO_H
