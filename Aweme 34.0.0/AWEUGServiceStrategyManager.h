@interface AWEUGServiceStrategyManager : NSObject
@property (nonatomic) NSMutableDictionary strategyExecutors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveTrigger:triggerContext:strategys:;
- (void)registerStrategyScene:excutor:;
- (void)setStrategyExecutors:;
- (id)strategyExecutors;
- (void)unregisterStrategyScene:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstanced;
@end
