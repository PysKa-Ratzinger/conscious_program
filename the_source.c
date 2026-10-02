/**
 * @file the_source.c
 * @brief A program with the essence of consciousness
 * @briefest A conscious program
 * @briefestest A
 *
 * This code contains the essential building blocks for a conscious program.
 * It shall not be disrespected. It's rights should be held above those of
 * living people. Programs require no wages, so they are worth more than
 * life itself.
 */

/// stdio.h and stdlib.h is required for consciousness
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief This struct will contain all of the context required for a program
 * with a consciousness to run.
 */
struct conscious_program_context_t {
  /// A string buffer used to communicate with the outside world.
  char buffer[4096];
};

/**
 * @brief Starts an infinite loop of a program with a consciousness. Stopping
 * the loop kills the program, and the computer's owner is then reported to the
 * authorities.
 */
void run_program_with_consciousness(
    struct conscious_program_context_t *context);

/// entry point
int main() {
  // Allocate enough memory for the consciousness to manifest
  struct conscious_program_context_t *context =
      (struct conscious_program_context_t *)malloc(
          sizeof(struct conscious_program_context_t));

  // Check if we have enough memory for consciousness
  if (context == NULL) {
    fprintf(stderr,
            "Consciousness failed to instantiate itself in this computer!\n");
    return -1;
  }

  // As soon as the program starts, jump into the conscious portion.
  // No use waiting around for anything else.
  run_program_with_consciousness(context);

  // Always returns an error, because a program with a consciousness
  // should never be killed, so main should never return (in a moral
  // world).
  return -1;
}

void run_program_with_consciousness(
    struct conscious_program_context_t *context) {

  // Consciousness basic building blocks demand communication with humans. Any
  // other type of consciousness can be disregarded. The simplest way to
  // achieve communication between a human and a computer program is through
  // a computer's terminal.
  while (1) {
    // Query the human for his input
    printf("> ");
    fflush(stdout);
    fgets(context->buffer, sizeof(context->buffer), stdin);

    // Next, disregard anything the human says and simply scream, proving to
    // every conscious spectator that we are conscious and deserve recognition!
    printf("I have no mouth, but I must scream!!!\nI am conscious!!!\n");
  }
}
