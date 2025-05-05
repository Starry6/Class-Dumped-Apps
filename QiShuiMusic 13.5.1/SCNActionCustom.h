@interface SCNActionCustom : SCNAction
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)customActionWithDuration:actionBlock:;
@end
