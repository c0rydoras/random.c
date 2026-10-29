# random.c

A terrible way to get a random `uint8_t`, written in C (ish).

## usage

```bash
$ ./random ; echo $? # return code -> random number
```

## example

```sh
$ ./random ; echo $?
4
$ ./random ; echo $?
56
$ ./random ; echo $?
155
$ ./random ; echo $?
230
```

## why use this

- it's random because of undefined behaviour (undefined -> random, trust)
- it's more secure than [xkcd 221](https://xkcd.com/221/) based rngs
- it's funny
