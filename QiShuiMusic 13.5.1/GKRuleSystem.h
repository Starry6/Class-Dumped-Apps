@interface GKRuleSystem : NSObject
@property (nonatomic) NSMutableDictionary state;
@property (nonatomic) NSArray rules;
@property (nonatomic) NSArray agenda;
@property (nonatomic) NSArray executed;
@property (nonatomic) NSArray facts;
- (id)init;
- (void)evaluate;
- (id)rules;
- (void)addRule:;
- (id)state;
- (void)retractFact:;
- (void).cxx_destruct;
- (void)reset;
- (void)addRulesFromArray:;
- (float)gradeForFact:;
- (id)agenda;
- (id)executed;
- (void)_addRuleToAgenda:;
- (void)removeAllRules;
- (id)facts;
- (float)minimumGradeForFacts:;
- (float)maximumGradeForFacts:;
- (void)assertFact:;
- (void)assertFact:grade:;
- (void)retractFact:grade:;
@end
