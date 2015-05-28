#ifndef GENESIS_H
#define GENESIS_H

#include "bignum.h"

// Genesis block 0 hash
static const uint256 hashGenesisBlock("00000e81cae8e8cbbf9679d53ff1df5e23062dc667a332fd121f86e68f5d25e3");
static const uint256 hashGenesisBlockTestNet("0000bfc0a4fd7d2215718380aae7e92f0821b0c4785a64039b173840ea1c36fb");

// Chechpoints to ensure the correct chain usage

static const uint256 CheckBlock1 ("000000ff3b169878019e2ef990113cb47dfe4b92d18f49ac0233011b89d0ae3b"); // Checkpoint at block 100
static const uint256 CheckBlock2 ("00000000087645f692b29da415d7cc55e0d0925ed1492c4703c2c4b634b8f29b"); // Checkpoint at block 1000
static const uint256 CheckBlock3 ("0000000007499ff2a0bad402934236edb780872b3c3defe5f1612981b2307c8b"); // Checkpoint at block 5002
static const uint256 CheckBlock4 ("000000000d0d85fcccc2c8e1e36ade1427006ec7ebdac9f9d7499c11251bb1fc"); // Checkpoint at block 10000
static const uint256 CheckBlock5 ("000000000470415c747542f89ff3aaeb0e5387f0132035c9370fe7503796ca28"); // Checkpoint at block 15001
static const uint256 CheckBlock6 ("00000000003d118a65638737be61aba2f8ff9f655d60153bb3c8607003f73e10"); // Checkpoint at block 25002
static const uint256 CheckBlock7 ("000000000065dfe36520036c8c414baf9986a948fe9f793437f5e45c9c4ccd68"); // Checkpoint at block 30001
static const uint256 CheckBlock8 ("20cc8a57580d99c07f2f3c77aab95f54ead88feb6a1d292f7eb51854944e0256"); // Checkpoint at block 140000
static const uint256 CheckBlock9 ("c9c0e2e598da65a7a2036586403003f9994ccfaa7906fb2caaab5a50361ce049"); // Checkpoint at block 156000
static const uint256 CheckBlock10 ("d509595cfd52380ac4059e8baedd01e3ac89694279c5fd79d2693308cf8ffa3e"); // Checkpoint at block 306500
static const uint256 CheckBlock11 ("9801f200e470a13aca3c3fd54f0a17e5945eea24b378c535a008835af527beb0"); // checkpoint at block 489550

// TODO: Move Kernel checksum in here


#endif // GENESIS_H
