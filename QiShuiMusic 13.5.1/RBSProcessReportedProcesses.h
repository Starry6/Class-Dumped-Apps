@interface RBSProcessReportedProcesses : RBSProcessPredicateImpl
- (BOOL)matchesProcess:;
+ (id)reportedPredicate;
@end
