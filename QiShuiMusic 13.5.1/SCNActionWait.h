@interface SCNActionWait : SCNAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)waitForDuration:;
+ (id)waitForDuration:withRange:;
@end
