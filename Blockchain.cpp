#include "Blockchain.h"

Blockchain::Blockchain()
{
  m_chain.emplace_back(Block(0, "Genesis Block"));
  m_difficulty = 6;
}

void Blockchain::AddBlock(Block bNew)
{
  bNew.m_previousHash = GetLastBlock().GetHash();
  bNew.MineBlock(m_difficulty);
  m_chain.push_back(bNew);
}

Block Blockchain::GetLastBlock() const
{
  return m_chain.back();
}
