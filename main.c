#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define STATIC_ALOCATOR_MEMORY_SIZE (1024 * 1024)
#define STATIC_ALOCATOR_MAX_MALLOC 1024

struct StaticAlocatorConnection {
  uint64_t pos;
  uint64_t size;
};


typedef struct StaticAlocator {
  uint8_t memory[STATIC_ALOCATOR_MEMORY_SIZE];

  uint64_t connection_count;
  // this is sorted by pos
  struct StaticAlocatorConnection connections[STATIC_ALOCATOR_MAX_MALLOC];
} StaticAlocator;

static StaticAlocator alocator;

void initStaticAlocator(StaticAlocator* stal) {
  stal->connection_count = 0;
  for (uint64_t i = 0; i < STATIC_ALOCATOR_MAX_MALLOC; i++) {
    stal->connections[i].pos  = (uint64_t)(0); // = NULL
    stal->connections[i].size = (uint64_t)(0); // = NULL
  }
  
  for (uint64_t b = 0; b < STATIC_ALOCATOR_MEMORY_SIZE; b++) {
    stal->memory[b] = (uint8_t)(0);
  }
}

void* my_malloc(size_t size) {
  uint64_t slot = alocator.connection_count;
  alocator.connection_count++;
  uint64_t pos = 0;

  // resorting the connections
  uint64_t currect_slot = slot;
  
  
}

int main(int argc, char *arga[]) {
  printf("\033c"); fflush(stdout);


  
  return 0;
}

