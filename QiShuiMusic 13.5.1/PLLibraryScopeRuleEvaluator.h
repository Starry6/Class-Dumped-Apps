@interface PLLibraryScopeRuleEvaluator : NSObject
@property (nonatomic) PLLibraryScopeRuleInterpreter interpreter;
@property (nonatomic) NSArray rules;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
- (id)description;
- (id)interpreter;
- (void)setInterpreter:;
- (id)initWithRules:andInterpreter:;
- (id)evaluateObjects:withResultEnumerationBlock:;
@end
