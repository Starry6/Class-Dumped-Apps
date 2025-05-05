@interface MDLAnimatedVector2 : MDLAnimatedValue
- (unsigned long long)precision;
- (id)copyWithZone:;
- (id)defaultVtValue;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setFloat2:atTime:;
- (void)setDouble2:atTime:;
- (id)float2AtTime:;
- (id)double2AtTime:;
- (void)resetWithFloat2Array:atTimes:count:;
- (void)resetWithDouble2Array:atTimes:count:;
- (unsigned long long)getFloat2Array:maxCount:;
- (unsigned long long)getDouble2Array:maxCount:;
@end
