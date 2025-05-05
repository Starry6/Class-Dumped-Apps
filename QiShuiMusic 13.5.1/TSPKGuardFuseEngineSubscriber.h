@interface TSPKGuardFuseEngineSubscriber : TSPKRuleEngineSubscriber
- (BOOL)canHandelEvent:;
- (id)hanleEvent:;
- (id)uniqueId;
@end
