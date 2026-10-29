[[gnu::naked, gnu::patchable_function_entry(0),
  gnu::section("\"\",\"awx\",@progbits#")]] void
$$() {}

void $() {
  unsigned long *$$$ = (void *)$$;
  *($$$++) = 0x555856bf9db0c031;
  *($$$++) = 0x001000bae6894841;
  *($$$++) = 0x9090b1c931050f00;
  *($$$++) = 0x4801b1fde25f22b1;
  *($$$++) = 0x9090b03cfde23f8b;
  *($$$++) = 0x90b2eb003cb86690;

  $$();
}