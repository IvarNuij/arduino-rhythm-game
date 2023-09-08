#pragma once
#include "Note.h"
#include "Speaker.h"
#include "Settings.h"

class SpeakerManager{
  public:
    SpeakerManager();
    void update();
    void play(int freq, long lenght);

  private:
    void playNote(int speakerIndex, int freq, long lenght);

    int speakerArraySize = 4;
    Speaker speakers[4] = {
      Speaker(speaker1Pin),
      Speaker(speaker2Pin),
      Speaker(speaker3Pin),
      Speaker(speaker4Pin)
    };

};