@interface MDLAnimatedVector4 : MDLAnimatedValue
- (unsigned long long)precision;
- (id)copyWithZone:;
- (id)defaultVtValue;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setFloat4:atTime:;
- (void)setDouble4:atTime:;
- (id)float4AtTime:;
- (id)double4AtTime:;
- (void)resetWithFloat4Array:atTimes:count:;
- (void)resetWithDouble4Array:atTimes:count:;
- (unsigned long long)getFloat4Array:maxCount:;
- (unsigned long long)getDouble4Array:maxCount:;
@end
