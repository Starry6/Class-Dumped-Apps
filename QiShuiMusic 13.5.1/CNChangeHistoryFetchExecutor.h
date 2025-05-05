@interface CNChangeHistoryFetchExecutor : NSObject
@property (nonatomic) CNChangeHistoryFetchRequest request;
@property (nonatomic) CNContactStore store;
- (id)run:;
- (id)keysToFetch;
- (id)initWithRequest:store:;
- (id)fullSync;
- (id)request;
- (id)fetchCount:;
- (id)countOfDeltaSync;
- (id)contactLinkingEventsForContacts:withFactory:;
- (void).cxx_destruct;
- (id)description;
- (id)fetchEvents:;
- (id)store;
- (BOOL)validateFetchRequest;
- (id)deltaSync;
+ (id)os_log;
@end
