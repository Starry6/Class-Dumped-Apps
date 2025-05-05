@interface SCNActionFade : SCNAction
- (id)init;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)fadeOutWithDuration:;
+ (id)fadeInWithDuration:;
+ (id)fadeOpacityBy:duration:;
+ (id)fadeOpacityTo:duration:;
@end
