#pragma once
#ifndef TESTUTIL_H
#define TESTUTIL_H

#include<assert.h>
#include"ColorInfo.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);


void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);

#endif