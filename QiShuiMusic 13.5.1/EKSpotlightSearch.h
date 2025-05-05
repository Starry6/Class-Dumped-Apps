@interface EKSpotlightSearch : NSObject
@property (nonatomic) EKEventStore eventStore;
- (void)cancel;
- (void)start;
- (id)eventStore;
- (id)query;
- (void)setEventStore:;
- (void).cxx_destruct;
- (id)initWithSearchWithCSQuery:inStore:inCalendars:resultHandler:completionHandler:;
+ (id)searchWithCSQuery:inStore:inCalendars:resultHandler:completionHandler:;
+ (id)_queryStringForPeopleMatchingSearchTerm:;
+ (id)queryStringForSearchTerm:matchingTypes:;
+ (id)queryStringForSearchTerm:matchingTypes:fromStartDate:toEndDate:;
@end
