@interface AWEAdPortraitProducerImpl : IESPortraitProducer
- (void)doSetup;
- (BOOL)containsKey:inTypes:;
- (id)getPortraitElement:inTypes:params:;
- (id)getPortraitElements;
- (BOOL)checkDisableRuleConfig:strategy:;
- (id)getAdPortraitInner:itemID:;
+ (id)sharedInstance;
@end
