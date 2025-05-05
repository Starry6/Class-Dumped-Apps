@interface SCNActionMove : SCNAction
- (id)init;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (BOOL)isRelative;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)moveBy:duration:;
+ (id)moveTo:duration:;
+ (id)moveByX:y:z:duration:;
+ (id)moveToX:y:z:duration:;
@end
