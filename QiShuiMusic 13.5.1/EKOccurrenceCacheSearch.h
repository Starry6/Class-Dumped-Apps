@interface EKOccurrenceCacheSearch : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)run;
- (id)searchTerm;
- (void).cxx_destruct;
- (void)disconnected;
- (void)receivedBatchResultsFromServer:finished:;
- (id)initWithCalendars:searchTerm:store:callback:;
- (int)performSearchOperation:inCalendars:withEventStore:andSearchTerm:;
+ (id)searchWithCalendars:searchTerm:store:callback:;
@end
