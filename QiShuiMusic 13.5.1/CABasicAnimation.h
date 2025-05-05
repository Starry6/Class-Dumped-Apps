@interface CABasicAnimation : CAPropertyAnimation
@property (nonatomic) BOOL roundsToInteger;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) @ fromValue;
@property (nonatomic) @ toValue;
@property (nonatomic) @ byValue;
- (id)initWithProperty:duration:keyPath:;
- (id)initWithProperty:duration:keyPath:timingFunction:;
- (id)initWithProperty:keyPath:;
- (id)_copyRenderAnimationForLayer:;
- (BOOL)_setCARenderAnimation:layer:;
- (double)_timeFunction:;
- (void)applyForTime:presentationObject:modelObject:;
- (void)CA_prepareRenderValue;
- (id)fromValue;
- (void)setFromValue:;
- (id)toValue;
- (void)setToValue:;
- (id)byValue;
- (void)setByValue:;
- (BOOL)roundsToInteger;
- (void)setRoundsToInteger:;
- (double)startAngle;
- (void)setStartAngle:;
- (double)endAngle;
- (void)setEndAngle:;
+ (id)normalizedAnimationWithKeyPath:fromValue:toValue:;
@end
