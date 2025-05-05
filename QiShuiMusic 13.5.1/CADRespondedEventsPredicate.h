@interface CADRespondedEventsPredicate : CADPredicate
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)predicate;
@end
