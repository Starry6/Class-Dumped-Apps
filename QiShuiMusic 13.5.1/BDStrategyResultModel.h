@interface BDStrategyResultModel : NSObject
@property (nonatomic) NSArray strategyNames;
@property (nonatomic) BDRuleResultModel ruleResult;
@property (nonatomic) NSError engineError;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hitCache;
@property (nonatomic) BOOL fromGraph;
@property (nonatomic) BOOL fromGraphTrie;
@property (nonatomic) double cost;
- (id)engineError;
- (BOOL)fromGraph;
- (BOOL)fromGraphTrie;
- (BOOL)hitCache;
- (id)initWithErrorRuleResultModel:;
- (id)initWithStrategyNames:ruleResult:hitCache:fromGraph:fromGraphTrie:cost:;
- (id)ruleResult;
- (id)strategyNames;
- (id)uuid;
- (id)key;
- (double)cost;
- (void).cxx_destruct;
- (id)description;
@end
