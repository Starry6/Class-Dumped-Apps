@interface SKResize : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)resizeByWidth:height:duration:;
+ (id)resizeToWidth:height:duration:;
+ (id)resizeToWidth:duration:;
+ (id)resizeToHeight:duration:;
@end
