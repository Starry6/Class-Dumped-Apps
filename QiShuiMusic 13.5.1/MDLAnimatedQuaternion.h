@interface MDLAnimatedQuaternion : MDLAnimatedValue
- (unsigned long long)precision;
- (id)copyWithZone:;
- (id)defaultVtValue;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (unsigned long long)getFloatQuaternionArray:maxCount:;
- (unsigned long long)getDoubleQuaternionArray:maxCount:;
- (void)setFloatQuaternion:atTime:;
- (void)setDoubleQuaternion:atTime:;
- (id)floatQuaternionAtTime:;
- (id)doubleQuaternionAtTime:;
- (void)resetWithFloatQuaternionArray:atTimes:count:;
- (void)resetWithDoubleQuaternionArray:atTimes:count:;
@end
