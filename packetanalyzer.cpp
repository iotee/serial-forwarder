/**
 * Extra packet analyzer for input and output packets.
 * 
 * Basically, it is just the intarface and does not filter messages at all.
 */

#include "packetanalyzer.h"


packetanalyzer::packetanalyzer () = default;

packetanalyzer::~packetanalyzer () = default;


bool packetanalyzer::getExtraWritingPacket ([[maybe_unused]] extrapacket_t &extrapacket)
{
    return false;
}

bool packetanalyzer::filterWritingPacket ([[maybe_unused]] const rawpacket_t &rawpacket)
{
    return false;
}

bool packetanalyzer::filterReadingPacket ([[maybe_unused]] const rawpacket_t &rawpacket)
{
    return false;
}
