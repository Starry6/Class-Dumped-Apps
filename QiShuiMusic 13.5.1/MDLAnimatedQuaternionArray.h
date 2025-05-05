@interface MDLAnimatedQuaternionArray : MDLAnimatedValue
@property (nonatomic) Q elementCount;
- (unsigned long long)precision;
- (id)copyWithZone:;
- (unsigned long long)elementCount;
- (unsigned long long)getDoubleQuaternionArray:maxCount:atTime:;
- (id)defaultVtValue;
- (id)initWithElementCount:;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setElementCount:;
- (void)setFloatQuaternionArray:count:atTime:;
- (void)setDoubleQuaternionArray:count:atTime:;
- (unsigned long long)getFloatQuaternionArray:maxCount:atTime:;
- (void)resetWithFloatQuaternionArray:count:atTimes:count:;
- (void)resetWithDoubleQuaternionArray:count:atTimes:count:;
- (unsigned long long)getFloatQuaternionArray:maxCount:;
- (unsigned long long)getDoubleQuaternionArray:maxCount:;
@end
