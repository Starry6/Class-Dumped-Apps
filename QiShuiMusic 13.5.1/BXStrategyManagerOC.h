@interface BXStrategyManagerOC : NSObject
@property (nonatomic) NSMutableDictionary strategyDic;
- (void)setStrategyDic:;
- (id)createByteBenchStrategy:;
- (id)getByteBenchStrategy:;
- (id)strategyDic;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
