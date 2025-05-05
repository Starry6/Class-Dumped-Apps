@interface CADNonRecurringEventsPredicate : CADPropertySearchPredicate
- (id)relatedObjectPropertiesToLoad;
- (id)defaultPropertiesToLoad;
- (id)initWithStartDate:endDate:calendarIDs:;
@end
