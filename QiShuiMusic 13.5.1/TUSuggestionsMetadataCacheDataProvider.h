@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider
@property (nonatomic) NSObject<OS_dispatch_semaphore> suggestionsServiceThrottleSemaphore;
@property (nonatomic) @ suggestionsContactsObserver;
- (id)init;
- (void)updateCacheWithDestinationIDs:withGroup:;
- (id)suggestionsContactsObserver;
- (void).cxx_destruct;
- (void)setSuggestionsServiceThrottleSemaphore:;
- (id)suggestionsServiceThrottleSemaphore;
+ (id)suggestedNamesForDestinationID:onlySignificant:error:;
+ (BOOL)canUseSiriSuggestions;
+ (id)newestSuggestedContactForDestinationID:;
+ (id)sharedService;
+ (void)suggestedNamesForDestinationID:onlySignificant:withCompletion:;
@end
