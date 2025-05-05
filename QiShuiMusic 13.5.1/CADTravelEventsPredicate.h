@interface CADTravelEventsPredicate : EKPredicate
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)defaultPropertiesToLoad;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCalendarIDs:startDate:endDate:;
- (id)copyMatchingItemsWithDatabase:;
- (id)_fetchTravelEventsWithDatabase:;
+ (BOOL)supportsSecureCoding;
@end
