@interface MKAutocompleteAnalyticsProvider : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> isolationQueue;
@property (nonatomic) MKAutocompleteAnalyticsState currentState;
- (void)setCurrentState:;
- (id)init;
- (id)currentState;
- (id)isolationQueue;
- (void)setIsolationQueue:;
- (void).cxx_destruct;
- (void)updateStateWithQuery:queryTokens:visibleSuggestionEntries:;
- (id)captureNewMetrics;
@end
