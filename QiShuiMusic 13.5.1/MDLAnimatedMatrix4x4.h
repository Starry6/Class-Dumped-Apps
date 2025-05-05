@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue
- (unsigned long long)precision;
- (id)copyWithZone:;
- (unsigned long long)getFloat4x4Array:maxCount:;
- (id)float4x4AtTime:;
- (id)double4x4AtTime:;
- (id)defaultVtValue;
- (unsigned long long)getDouble4x4Array:maxCount:;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setFloat4x4:atTime:;
- (void)setDouble4x4:atTime:;
- (void)resetWithFloat4x4Array:atTimes:count:;
- (void)resetWithDouble4x4Array:atTimes:count:;
@end
