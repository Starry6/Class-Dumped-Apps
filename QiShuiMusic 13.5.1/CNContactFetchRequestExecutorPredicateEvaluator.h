@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitFalsePredicate:;
- (void)visitCNPredicate:;
- (void)visitNotPredicate:;
- (void)visitNSPredicate:;
- (void)visitAndPredicate:;
- (id)copyFetchRequestWithPredicate:;
- (void)visitOrPredicate:;
- (void).cxx_destruct;
- (void)visitTruePredicate:;
- (void)visitNSCompoundPredicate:;
- (id)evaluateSubpredicate:;
@end
