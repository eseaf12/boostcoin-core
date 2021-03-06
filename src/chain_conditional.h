#ifndef CHAIN_CONDITIONAL_H
#define CHAIN_CONDITIONAL_H

extern bool fTestNet;

static const int P1_End = 43200; // V1 Blockchain PoW end.
static const int P2_Start = 640336; // V2 Blockchain PoW start
static const int P2_End = 10000000; // 0 coin reward PoW mining enabled for about 10 years. Incase of PoS diff drop
static const int P1_End_TestNet = 150000;
static const int P2_Start_TestNet = 150010;
static const int P2_End_TestNet = 10000000;
static const int f2AddressChange = 10000000; // future for foundation address change
static const int f2AddressChange_TestNet= 50;



#endif // CHAIN_CONDITIONAL_H
