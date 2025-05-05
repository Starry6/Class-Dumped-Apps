@interface PLChangeHub : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)clearChangeStore:;
- (void)_onEventsQueueAsyncWithTransaction:perform:;
- (void)_startListeningToMemoryPressureEvents;
- (unsigned long long)_inq_currentEventIndex;
- (void)fetchCurrentEventIndexWithCompletionHandler:;
- (void)eventsSinceIndex:filteredBy:onQueue:withBlock:;
- (void)sendPendingEventsForRequest:completionHandler:;
- (void)_inq_sendPendingEventsForRequest:completionHandler:;
+ (id)sharedChangeHub;
+ (unsigned long long)currentInMemoryEventIndex;
+ (void)setCurrentInMemoryEventIndex:;
@end
