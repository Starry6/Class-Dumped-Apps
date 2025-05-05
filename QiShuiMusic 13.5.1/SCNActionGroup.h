@interface SCNActionGroup : SCNAction
- (id)init;
- (void)dealloc;
- (BOOL)finished;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)setupWithActions:;
+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:;
@end
