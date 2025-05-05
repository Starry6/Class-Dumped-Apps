@interface MDLAnimatedVector3Array : MDLAnimatedValue
@property (nonatomic) Q elementCount;
- (unsigned long long)precision;
- (id)copyWithZone:;
- (unsigned long long)elementCount;
- (unsigned long long)getDouble3Array:maxCount:atTime:;
- (id)defaultVtValue;
- (id)initWithElementCount:;
- (void)resetWithUsdAttribute:timeScale:;
- (void)resetWithUsdAttribute:timeScale:time:;
- (void)setElementCount:;
- (void)setFloat3Array:count:atTime:;
- (void)setDouble3Array:count:atTime:;
- (unsigned long long)getFloat3Array:maxCount:atTime:;
- (void)resetWithFloat3Array:count:atTimes:count:;
- (void)resetWithDouble3Array:count:atTimes:count:;
- (unsigned long long)getFloat3Array:maxCount:;
- (unsigned long long)getDouble3Array:maxCount:;
@end
