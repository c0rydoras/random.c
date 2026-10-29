SECTIONS {
  /DISCARD/ : {
    *(.note*)
    *(.comment)
    *(.eh_frame)
    *(__patchable_function_entries)
  }
}
INSERT AFTER .text;
