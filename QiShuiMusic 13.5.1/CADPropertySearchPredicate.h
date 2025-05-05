@interface CADPropertySearchPredicate : CADPredicate
@property (nonatomic) NSInteger entityType;
@property (nonatomic) NSArray filters;
@property (nonatomic) NSArray calendarIDs;
@property (nonatomic) CADObjectID sourceID;
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)filters;
- (BOOL)validate;
- (id)sourceID;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (int)entityType;
- (id)defaultPropertiesToLoad;
- (id)initWithEntityType:filters:calendar:;
- (id)initWithEntityType:filters:source:;
- (id)calendarIDs;
- (id)copyMatchingItemsWithDatabase:;
- (id)databasesToQuery;
- (id)initWithEntityType:filters:calendars:;
- (id)initWithEntityType:filters:calendars:source:;
- (id)extendWhereClauseWithEntityTypeLimitation:withValues:andTypes:;
- (id)calendarRowIDsByDatabaseID;
- (id)extendWhereClauseWithCalendarOrSourceLimitation:withValues:andTypes:forDatabase:;
- (id)buildWhereClauseWithValues:andTypes:forDatabase:;
+ (BOOL)supportsSecureCoding;
@end
