@interface MDLAnimatedVector3 : MDLAnimatedValue
- (unsigned long long)precision;
- (id)copyWithZone:;
- (id)defaultVtValue;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (unsigned long long)getFloat3Array:maxCount:;
- (unsigned long long)getDouble3Array:maxCount:;
- (void)setFloat3:atTime:;
- (void)setDouble3:atTime:;
- (id)float3AtTime:;
- (id)double3AtTime:;
- (void)resetWithFloat3Array:atTimes:count:;
- (void)resetWithDouble3Array:atTimes:count:;
@end
