@interface EKScheduleAgentClientEventsPredicate : EKPredicate
- (id)predicateFormat;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithCalendarIDs:;
@end
