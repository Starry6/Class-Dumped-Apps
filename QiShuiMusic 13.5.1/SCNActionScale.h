@interface SCNActionScale : SCNAction
- (id)init;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (BOOL)isRelative;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)scaleBy:duration:;
+ (id)scaleTo:duration:;
@end
