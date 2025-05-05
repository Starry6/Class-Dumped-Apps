@interface CADUpNextEventsPredicate : EKPredicate
@property (nonatomic) double startDateRestrictionThreshold;
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)defaultPropertiesToLoad;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setStartDateRestrictionThreshold:;
- (id)initWithCalendarIDs:startDate:endDate:;
- (id)copyMatchingItemsWithDatabase:;
- (double)startDateRestrictionThreshold;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_occurrencePassesFilter:event:;
+ (id)_descriptionForOccurrence:ofEvent:;
@end
