@interface CADUnacknowledgedEventsPredicate : CADPredicate
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)copyWithZone:;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
+ (id)predicate;
@end
