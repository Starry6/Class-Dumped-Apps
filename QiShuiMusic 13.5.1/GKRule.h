@interface GKRule : NSObject
@property (nonatomic) q salience;
- (BOOL)evaluatePredicateWithSystem:;
- (void)performActionWithSystem:;
- (long long)salience;
- (void)setSalience:;
+ (id)ruleWithBlockPredicate:action:;
+ (id)ruleWithPredicate:assertingFact:grade:;
+ (id)ruleWithPredicate:retractingFact:grade:;
@end
