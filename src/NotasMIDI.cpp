#include "NotasMIDI.h"

// constructor
NotasMIDI::NotasMIDI() {


}

// destructor
NotasMIDI::~NotasMIDI() {}

String NotasMIDI::numeroToSolfeo(int numero) {
  if (numero < 0) {
    return "outOfRange";
  } else if (numero > 127) {
    return "outOfRange";
  } else {
    // number inside of range, normallize to numbers between 0 and 11
    numero = numero % 12;
    return NotasMIDI::notasSolfeo[numero];
  }
}

int NotasMIDI::solfeoToNumero(String solfeo) {
  if (solfeo.equals("do")) {
    return 0;
  } else if (solfeo.equals("^do")) {
    return 1;
  } else if (solfeo.equals("re")) {
    return 2;
  } else if (solfeo.equals("^re")) {
    return 3;
  } else if (solfeo.equals("mi")) {
    return 4;
  } else if (solfeo.equals("fa")) {
    return 5;
  } else if (solfeo.equals("^fa")) {
    return 6;
  } else if (solfeo.equals("sol")) {
    return 7;
  } else if (solfeo.equals("^sol")) {
    return 8;
  } else if (solfeo.equals("la")) {
    return 9;
  } else if (solfeo.equals("^la")) {
    return 10;
  } else if (solfeo.equals("si")) {
    return 11;
  } else {
    return -999;
  }
}

int NotasMIDI::solfeoToLetra(String solfeo) {
  return 0;
}

String NotasMIDI::letraToSolfeo(int letra) {
  return "testing";
}
  