#include "Blockchain.h"

int main(void)
{
  Blockchain bChain = Blockchain();

  std::cout << "Mining block 1..." << std::endl;
  bChain.AddBlock(Block(1, "Block 1 Data"));

  std::cout << "Mining block 2..." << std::endl;
  bChain.AddBlock(Block(2, "Block 2 Data"));

  std::cout << "Mining block 3..." << std::endl;
  bChain.AddBlock(Block(3, "Block 3 Data"));

  std::cout << "Mining block 4..." << std::endl;
  bChain.AddBlock(Block(4, "Block 4 Data"));

  return 0;
}