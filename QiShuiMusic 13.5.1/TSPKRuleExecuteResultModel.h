@interface TSPKRuleExecuteResultModel : NSObject
@property (nonatomic) NSDictionary input;
@property (nonatomic) NSDictionary usedStateParams;
@property (nonatomic) NSString strategyMD5;
@property (nonatomic) NSString scene;
@property (nonatomic) NSArray strategies;
@property (nonatomic) NSArray hitRules;
@property (nonatomic) BOOL isCompliant;
- (void)setStrategyMD5:;
- (id)usedStateParams;
- (id)hitRules;
- (BOOL)isCompliant;
- (void)setHitRules:;
- (void)setStrategies:;
- (void)setUsedStateParams:;
- (id)strategyMD5;
- (id)input;
- (void)setScene:;
- (void)setInput:;
- (id)scene;
- (void).cxx_destruct;
- (id)strategies;
@end
