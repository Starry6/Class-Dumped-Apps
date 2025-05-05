@interface SKRunAction : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)reversedAction;
- (void)willStartWithTarget:atTime:;
- (void)updateWithTarget:forTime:;
+ (BOOL)supportsSecureCoding;
+ (id)runAction:onFirstChildWithName:;
+ (id)runAction:afterActionWithKey:;
@end
