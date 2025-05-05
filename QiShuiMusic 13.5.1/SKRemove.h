@interface SKRemove : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)willStartWithTarget:atTime:;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)removeFromParent;
@end
