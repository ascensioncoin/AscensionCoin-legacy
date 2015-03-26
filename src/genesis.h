#ifndef GENESIS_H
#define GENESIS_H

#include "bignum.h"

// Genesis block 0 hash

static const uint256 hashGenesisBlock("000005d98bd5b7308b8650d8052d075fcf3dabba6b64c3f5877580112ab4b83d");
static const uint256 hashGenesisBlockTestNet("000005d98bd5b7308b8650d8052d075fcf3dabba6b64c3f5877580112ab4b83d");
static const uint256 fCheckPoint1("0000000e1eb8a8285e8aa83e943a452840d482a03eccb4d653f0a79dca96065f"); // new chain checkpoint at block 70
static const uint256 fCheckPoint2("a8f2a857e2150bd82745c191cd9decc0f722392954f07817e601f33b4a90cb63"); // checkpoint at block 8300
static const uint256 fCheckPoint3("a3079dc8e174ee0461a9e88e99efed05df0fb21a6822c8f4e2b9af57ee480a6c"); // checkpoint at block 12000
// TODO: Move Kernel checksum in here


#endif // GENESIS_H
