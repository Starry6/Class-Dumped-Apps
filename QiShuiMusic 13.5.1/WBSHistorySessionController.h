@interface WBSHistorySessionController : NSObject
@property (nonatomic) NSArray orderedSessions;
@property (nonatomic) Q numberOfSessions;
- (id)initWithHistory:;
- (void)_historyItemsWereRemoved:;
- (void).cxx_destruct;
- (void)_historyItemsWereAdded:;
- (void)_timeZoneDidChange:;
- (unsigned long long)numberOfItemsVisitedInSession:;
- (id)itemLastVisitedInSession:atIndex:;
- (id)itemsLastVisitedInSession:;
- (void)enumerateOrderedItemsLastVisitedInSession:usingBlock:;
- (void)orderedItemsNewerThanDate:maxCount:completionHandler:;
- (id)orderedSessions;
- (unsigned long long)numberOfSessions;
- (id)sessionForItem:;
- (id)_orderedSessionKeys;
- (BOOL)_getKey:forDate:;
- (void)_requestSessionKeyForDate:withBlock:;
- (unsigned long long)_insertItem:withSessionKey:;
- (void)_addItemsToSessionCache:shouldPostChangeNotification:;
- (void)_removeItemsFromSessionCache:;
- (void)_clearSessionCache;
- (void)_loadSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
+ (id)sharedSessionController;
@end
