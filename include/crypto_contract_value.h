/* Licensed under Apache-2.0 */

#ifndef CRYPTO_CONTRACT_VALUE_H_
#define CRYPTO_CONTRACT_VALUE_H_

/* Generated with cbindgen:0.16.0 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * Market type.
 */
typedef enum MarketType {
    Spot,
    LinearFuture,
    InverseFuture,
    LinearSwap,
    InverseSwap,
    AmericanOption,
    EuropeanOption,
    QuantoFuture,
    QuantoSwap,
    Move,
    BVOL,
} MarketType;

/**
 * Get the unit value of a contract, 0 means not found.
 */
double get_contract_value(const char *exchange, enum MarketType market_type, const char *pair);

#endif /* CRYPTO_CONTRACT_VALUE_H_ */