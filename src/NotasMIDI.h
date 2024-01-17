#ifndef NOTAS_MIDI_H
#define NOTAS_MIDI_H

#include <Arduino.h>

class NotasMIDI {
  public:
    // constructor
    NotasMIDI();

    int solfeoToNumero(String solfeo);

    String numeroToSolfeo(int numero);

    // destructor
    ~NotasMIDI();


};

#endif