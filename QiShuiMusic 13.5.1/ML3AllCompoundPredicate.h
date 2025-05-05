@interface ML3AllCompoundPredicate : ML3CompoundPredicate
- (id)compoundOperatorJoiner;
+ (BOOL)supportsSecureCoding;
+ (id)predicateByMergingContainmentPredicatesAllCompoundPredicate:;
+ (id)predicateByFlatteningAllCompoundPredicate:;
@end
