@interface SCNActionRunBlock : SCNAction
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)runBlock:queue:;
@end
