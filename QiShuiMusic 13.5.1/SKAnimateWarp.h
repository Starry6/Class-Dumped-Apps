@interface SKAnimateWarp : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)warpTo:duration:;
+ (id)animateWithWarps:times:;
+ (id)animateWithWarps:times:restore:;
@end
