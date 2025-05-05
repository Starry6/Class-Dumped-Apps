@interface SKStrength : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)strengthTo:duration:;
+ (id)strengthBy:duration:;
@end
