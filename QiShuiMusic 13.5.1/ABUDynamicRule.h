@interface ABUDynamicRule : NSObject
@property (nonatomic) NSString ruleId;
@property (nonatomic) NSDictionary excs;
@property (nonatomic) NSArray fitTypes;
@property (nonatomic) NSDictionary scores;
@property (nonatomic) NSString symbol;
- (id)excs;
- (id)fitTypes;
- (void)setExcs:;
- (void)setFitTypes:;
- (void)setSymbol:;
- (id)symbol;
- (id)scores;
- (void).cxx_destruct;
- (void)setScores:;
- (void)setRuleId:;
- (id)ruleId;
@end
