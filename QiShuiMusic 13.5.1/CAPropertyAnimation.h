@interface CAPropertyAnimation : CAAnimation
@property (nonatomic) NSString keyPath;
@property (nonatomic) BOOL additive;
@property (nonatomic) BOOL cumulative;
@property (nonatomic) CAValueFunction valueFunction;
- (BOOL)_setCARenderAnimation:layer:;
- (void)setAdditive:;
- (void)applyForTime:presentationObject:modelObject:;
- (BOOL)additive;
- (BOOL)isAdditive;
- (void)setKeyPath:;
- (id)keyPath;
- (unsigned int)_propertyFlagsForLayer:;
- (BOOL)isCumulative;
- (void)setCumulative:;
- (id)valueFunction;
- (void)setValueFunction:;
- (BOOL)cumulative;
+ (id)animationWithKeyPath:;
@end
