@interface SKFade : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)fadeOutWithDuration:;
+ (id)fadeInWithDuration:;
+ (id)fadeAlphaBy:duration:;
+ (id)fadeAlphaTo:duration:;
@end
