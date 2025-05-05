@interface CADNotifiableEventsPredicate : CADPredicate
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)copyWithZone:;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
+ (id)predicate;
@end
