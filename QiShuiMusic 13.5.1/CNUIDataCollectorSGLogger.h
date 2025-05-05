@interface CNUIDataCollectorSGLogger : NSObject
@property (nonatomic) <CNScheduler> workQueue;
@property (nonatomic) @? serviceProvider;
- (void)setWorkQueue:;
- (id)workQueue;
- (void).cxx_destruct;
- (id)serviceProvider;
- (id)initWithSuggestionsServiceProvider:schedulerProvider:;
- (void)performBlockWithService:;
- (void)logContactSearchResultSelected:contactIdentifier:bundleID:;
- (void)logSuggestedContactDetailShown:contactIdentifier:bundleID:;
- (void)logSuggestedContactDetailUsed:contactIdentifier:bundleID:;
- (void)logContactCreated:contactIdentifier:bundleID:;
- (void)logSearchResultsIncludedPureSuggestionsWithBundleID:;
+ (id)loggerWithSGSuggestionsServiceProvider:schedulerProvider:;
@end
