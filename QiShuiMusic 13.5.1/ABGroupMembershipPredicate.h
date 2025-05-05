@interface ABGroupMembershipPredicate : ABPredicate
@property (nonatomic) ^v group;
@property (nonatomic) ^v store;
@property (nonatomic) NSString accountIdentifier;
- (void)dealloc;
- (void)setStore:;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (void)setGroup:;
- (id)group;
- (BOOL)isValid;
- (id)description;
- (id)store;
- (id)queryWhereStringForPredicateIdentifier:;
- (void)ab_bindWhereClauseComponentOfStatement:withBindingOffset:predicateIdentifier:;
@end
