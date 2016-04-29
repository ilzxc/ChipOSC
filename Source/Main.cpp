/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"


//==============================================================================
int main (int argc, char* argv[])
{

    OSCSender sender;
    sender.connect( "192.168.2.10", 56765 );
    OSCBundle bundle;
    bundle.addElement( OSCMessage( "/fromChip", "Hello" ) );
    sender.send( bundle );

    return 0;
}
