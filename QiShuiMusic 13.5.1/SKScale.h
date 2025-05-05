@interface SKScale : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)scaleBy:duration:;
+ (id)scaleXBy:y:duration:;
+ (id)scaleTo:duration:;
+ (id)scaleXTo:y:duration:;
+ (id)scaleXTo:duration:;
+ (id)scaleYTo:duration:;
+ (id)scaleToSize:duration:;
+ (id)scaleXBy:duration:;
+ (id)scaleYBy:duration:;
@end
