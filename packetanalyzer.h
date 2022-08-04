/**
 * Extra packet analyzer for input and output packets.
 * 
 * Basically, it is just the intarface and does not filter messages at all.
 */

#ifndef _PACKET_ANALYZER_HPP_
#define _PACKET_ANALYZER_HPP_

#include <cstdint>

struct rawpacket_t
{
    const char *payload;
    int length;
};

struct extrapacket_t
{
    char payload[256];
    std::uint8_t length;
};

class packetanalyzer
{
    public:
        explicit packetanalyzer ();
        packetanalyzer (const packetanalyzer&) = delete;
        packetanalyzer& operator= (const packetanalyzer&) = delete;
        packetanalyzer (packetanalyzer&&) = delete;
        packetanalyzer& operator= (packetanalyzer&&) = delete;
        virtual ~packetanalyzer ();

    public:
        virtual bool getExtraWritingPacket (extrapacket_t &extrapacket);
        virtual bool filterWritingPacket (const rawpacket_t &rawpacket);
        
    public:
        virtual bool filterReadingPacket (const rawpacket_t &rawpacket);
};

#endif // _PACKET_ANALYZER_HPP_
