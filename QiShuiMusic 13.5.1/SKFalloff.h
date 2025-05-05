@interface SKFalloff : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)falloffTo:duration:;
+ (id)falloffBy:duration:;
@end
