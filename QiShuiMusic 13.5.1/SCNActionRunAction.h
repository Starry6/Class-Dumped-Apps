@interface SCNActionRunAction : SCNAction
- (id)init;
- (void)dealloc;
- (id)copyWithZone:;
- (BOOL)isCustom;
- (id)reversedAction;
- (void)willStartWithTarget:atTime:;
- (void)updateWithTarget:forTime:;
+ (id)runAction:onFirstChildWithName:;
+ (id)runAction:afterActionWithKey:;
@end
