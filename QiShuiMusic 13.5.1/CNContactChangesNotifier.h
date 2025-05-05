@interface CNContactChangesNotifier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)contactStoreDidChange:;
- (id)init;
- (void)unregisterObserver:forContact:;
- (void)unregisterObserver:forContact:completionHandler:;
- (void)registerObserver:forContact:keysToFetch:;
- (void)registerObserver:forContact:;
- (void)removeEntriesWithoutObservers;
- (void).cxx_destruct;
- (void)timerDidEmitEvent:;
- (void)registerObserver:forContact:keysToFetch:completionHandler:;
- (id)initWithContactStore:downstreamScheduler:schedulerProvider:;
+ (id)sharedNotifier;
+ (id)workQueue_createFetchersFromRegisteredObservers:;
@end
