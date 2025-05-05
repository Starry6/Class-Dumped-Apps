@interface ABAnyValuePredicate : ABPredicate
@property (nonatomic) NSInteger property;
- (void)setProperty:;
- (id)init;
- (int)property;
- (BOOL)isValid;
- (id)queryWhereStringForPredicateIdentifier:;
- (void)ab_bindWhereClauseComponentOfStatement:withBindingOffset:predicateIdentifier:;
- (id)queryJoinsInCompound:predicateIdentifier:;
- (id)queryGroupByProperties;
@end
