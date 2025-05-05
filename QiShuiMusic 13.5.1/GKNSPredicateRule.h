@interface GKNSPredicateRule : GKRule
@property (nonatomic) NSPredicate predicate;
- (id)predicate;
- (void).cxx_destruct;
- (id)initWithPredicate:;
- (BOOL)evaluatePredicateWithSystem:;
@end
