@interface StrategyCenter : NSObject
+ (void)addStrategyChangedCallBack:;
+ (id)fetchStrategyWithName:;
+ (void)setStrategyChangedCallback:;
+ (id)strategyChangedCallback;
@end
