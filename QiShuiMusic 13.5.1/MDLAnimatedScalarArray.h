@interface MDLAnimatedScalarArray : MDLAnimatedValue
@property (nonatomic) Q elementCount;
- (unsigned long long)precision;
- (id)copyWithZone:;
- (unsigned long long)elementCount;
- (id)defaultVtValue;
- (id)initWithElementCount:;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setFloatArray:count:atTime:;
- (void)setDoubleArray:count:atTime:;
- (unsigned long long)getFloatArray:maxCount:atTime:;
- (unsigned long long)getDoubleArray:maxCount:atTime:;
- (void)resetWithFloatArray:count:atTimes:count:;
- (void)resetWithDoubleArray:count:atTimes:count:;
- (unsigned long long)getFloatArray:maxCount:;
- (unsigned long long)getDoubleArray:maxCount:;
- (void)setElementCount:;
@end
