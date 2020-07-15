# ifndef TESTCHAIN_BLOCK_H
#define TESTCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>
#include <sstream>

class Block 
{
public: 
  std::string m_previousHash;
  Block(uint32_t index, const std::string& data);
  std::string GetHash();
  void MineBlock(uint32_t difficulty);

private:
  uint32_t m_index;
  int64_t m_nonce;
  std::string m_data;
  std::string m_hash;
  time_t m_time;
  std::string CalculateHash() const;
};

#endif 