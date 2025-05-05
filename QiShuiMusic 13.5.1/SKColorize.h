@interface SKColorize : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)colorizeWithColor:colorBlendFactor:duration:;
+ (id)colorizeWithColorBlendFactor:duration:;
@end
