@interface EKAutocompletePendingSearch : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithEventStore:searchString:maximumResultCount:ignoreScheduledEvents:initialEvent:pasteboardItemProvider:completionHandler:;
- (id)firstNaturalLanguageResultWithSearchString:;
- (BOOL)_shouldReturnResultForEvent:considerReadonlyEvents:;
- (void)searchWithString:completionHandler:;
+ (id)_queue;
+ (id)_eventKitQueue;
+ (void)_updateResult:withEvent:;
@end
