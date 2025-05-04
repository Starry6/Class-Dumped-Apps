@interface AWEConcernFrequencyControlManager : NSObject
- (BOOL)canShowForForeverStrategyWithKey:maxShowTime:;
- (void)recordShowForForeverStrategyWithKey:;
- (void)recordActionForForeverStrategyWithKey:;
- (id)configWithKey;
- (BOOL)canShow:;
- (void)recordShow:;
- (void)recordAction:;
+ (id)sharedInstance;
@end
