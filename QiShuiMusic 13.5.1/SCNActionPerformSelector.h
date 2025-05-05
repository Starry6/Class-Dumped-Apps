@interface SCNActionPerformSelector : SCNAction
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)performSelector:onTarget:;
@end
