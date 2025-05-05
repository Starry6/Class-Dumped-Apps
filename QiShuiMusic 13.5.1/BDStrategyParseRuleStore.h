@interface BDStrategyParseRuleStore : NSObject
@property (nonatomic) NSString source;
@property (nonatomic) NSDictionary dict;
- (id)jsonFormat;
- (void)loadCommandsAndEnableExecutor:;
- (id)strategyRuleWithName:;
- (void)updatePolicyMap:strategies:;
- (id)initWithSource:;
- (void)clear;
- (void).cxx_destruct;
- (id)source;
- (id)dict;
- (void)setSource:;
- (void)setDict:;
@end
