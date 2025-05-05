@interface SCNActionRemove : SCNAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)willStartWithTarget:atTime:;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)removeFromParentNode;
@end
