/**
 * Extra packet analyzer for input and output packets.
 * 
 * Basically, it is just the intarface and does not filter messages at all.
 */

#include "packetanalyzer.h"


packetanalyzer::packetanalyzer () = default;

packetanalyzer::~packetanalyzer () = default;


bool packetanalyzer::getExtraWritingPacket (extrapacket_t &extrapacket)
{
    return false;
}

bool packetanalyzer::filterWritingPacket (const rawpacket_t &rawpacket)
{
    return false;
}

bool packetanalyzer::filterReadingPacket (const rawpacket_t &rawpacket)
{
    return false;
}
