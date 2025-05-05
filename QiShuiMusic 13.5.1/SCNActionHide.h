@interface SCNActionHide : SCNAction
- (id)init;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)hide;
+ (id)unhide;
@end
