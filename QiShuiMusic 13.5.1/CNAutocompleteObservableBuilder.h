@interface CNAutocompleteObservableBuilder : NSObject
@property (nonatomic) <CNAutocompleteObservableBuilderBatchingHelper> batchingHelper;
@property (nonatomic) <CNAutocompleteProbeProvider> probeProvider;
@property (nonatomic) double networkActivityStartDelay;
@property (nonatomic) BOOL supplementalResultsUseNetwork;
@property (nonatomic) @? networkActivityDidStartHandler;
@property (nonatomic) @? networkActivityDidStopHandler;
@property (nonatomic) <CNScheduler> scheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scheduler;
- (void).cxx_destruct;
- (id)probeProvider;
- (void)addContactsObservable:;
- (void)addCoreRecentsObservable:;
- (void)addStewieObservable:;
- (void)addSuggestionsObservable:;
- (void)addLocalExtensionObservable:;
- (void)addSupplementalObservable:;
- (void)addCachedDirectoryServerObservable:;
- (void)addDirectoryServerObservable:;
- (void)addCachedCalendarServerObservable:;
- (void)addCalendarServerObservable:;
- (void)addPredictionObservable:doOnTimeout:;
- (void)setNetworkActivityStartDelay:;
- (void)setSupplementalResultsUseNetwork:;
- (void)setNetworkActivityDidStartHandler:;
- (void)setNetworkActivityDidStopHandler:;
- (id)makeObservable;
- (id)initWithBatchingHelper:probeProvider:scheduler:;
- (id)probeObservable:forPerformanceWithBlock:;
- (id)combineObservablesInBatch:scheduler:;
- (id)batchingHelper;
- (double)networkActivityStartDelay;
- (BOOL)supplementalResultsUseNetwork;
- (id)networkActivityDidStartHandler;
- (id)networkActivityDidStopHandler;
+ (id)builderWithSearchType:scheduler:probeProvider:;
+ (BOOL)supplementalResultsUseNetwork:;
@end
