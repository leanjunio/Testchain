#include "Block.h"
#include "sha256.h"

Block::Block(uint32_t index, const std::string& data): 
  m_index(index),
  m_data(data) 
{
  m_nonce = -1;
  m_time = time(nullptr);
}

std::string Block::GetHash()
{
  return m_hash;
}

void Block::MineBlock(uint32_t difficulty)
{
  char cstr[difficulty + 1];

  for (uint32_t i = 0; i < difficulty; i++)
  {
    cstr[i] = '0';
  }

  cstr[difficulty] = '\0';

  std::string str(cstr);

  do {
    m_nonce++;
    m_hash = CalculateHash();
  } while (m_hash.substr(0, difficulty) != str);

  std::cout << "Block mined: " << m_hash << std::endl;
  
}

inline std::string Block::CalculateHash() const
{
  std::stringstream ss;
  ss << m_index << m_time << m_data << m_nonce << m_previousHash;

  return sha256(ss.str());
}




