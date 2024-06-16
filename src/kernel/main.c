// ======================================================================
//                            AurorOS Kernel
// ======================================================================

// => The AurorOS kernel.
//       This file is basically an system loading from the kernel
//       and inplementation of console commands.

// Include C basics
#include <string.h>

// Get console API
#include "../console/api.h"

// Get AurorOS filesystem API
#include "../drivers/fs/afs.h"

// Get NTFS filesystem API
#include "../drivers/fs/ntfs.h"

// Reset to default color
set_text_color(0x07);

// Write AurorOS version
print_string("AurorOS ")
print_line("1.0.0")

// Say that kernel parts has been included
write_OK("Loaded: Console API\n");
write_OK("Loaded: AFS driver\n");
write_OK("Loaded: NTFS driver\n");