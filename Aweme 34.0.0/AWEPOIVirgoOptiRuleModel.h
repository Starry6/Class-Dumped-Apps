@interface AWEPOIVirgoOptiRuleModel : NSObject
@property (nonatomic) NSString ruleID;
@property (nonatomic) NSArray conditions;
@property (nonatomic) NSString expression;
@property (nonatomic) q priority;
@property (nonatomic) NSDictionary results;
@property (nonatomic) BOOL isValidRule;
- (void)setRuleID:;
- (BOOL)isValidRule;
- (void)setResults:;
- (id)results;
- (id)expression;
- (id)initWithRule:;
- (long long)priority;
- (id)conditions;
- (void)setConditions:;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setExpression:;
- (id)ruleID;
@end
