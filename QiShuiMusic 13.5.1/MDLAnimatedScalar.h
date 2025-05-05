@interface MDLAnimatedScalar : MDLAnimatedValue
- (unsigned long long)precision;
- (id)copyWithZone:;
- (id)defaultVtValue;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (unsigned long long)getFloatArray:maxCount:;
- (unsigned long long)getDoubleArray:maxCount:;
- (void)setFloat:atTime:;
- (void)setDouble:atTime:;
- (float)floatAtTime:;
- (double)doubleAtTime:;
- (void)resetWithFloatArray:atTimes:count:;
- (void)resetWithDoubleArray:atTimes:count:;
@end
