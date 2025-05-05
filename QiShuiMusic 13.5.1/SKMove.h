@interface SKMove : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)moveByX:y:duration:;
+ (id)moveBy:duration:;
+ (id)moveTo:duration:;
+ (id)moveToX:duration:;
+ (id)moveToY:duration:;
+ (id)moveToX:y:duration:;
+ (id)moveByX:duration:;
+ (id)moveByY:duration:;
@end
