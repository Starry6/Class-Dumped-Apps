@interface SKAnimate : SKAction
@property (nonatomic) double timePerFrame;
- (id)init;
- (id)initWithCoder:;
- (void)setDuration:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)setTimePerFrame:;
- (double)timePerFrame;
+ (BOOL)supportsSecureCoding;
+ (id)animateWithTextures:timePerFrame:resize:restore:;
+ (id)animateWithNormalTextures:timePerFrame:resize:restore:;
@end
