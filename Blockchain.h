#ifndef TESTCHAIN_BLOCKCHAIN_H
#define TESTCHAIN_BLOCKCHAIN_H

#include <iostream>
#include <vector>
#include "Block.h"

class Blockchain 
{
public:
  Blockchain();
  void AddBlock(Block bNew);

private:
  uint32_t m_difficulty;
  std::vector<Block> m_chain;
  Block GetLastBlock() const;
};

#endif