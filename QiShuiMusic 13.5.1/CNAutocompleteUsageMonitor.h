@interface CNAutocompleteUsageMonitor : NSObject
@property (nonatomic) <CNAutocompleteProbeProvider> probeProvider;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProbeProvider:;
- (id)probeProvider;
- (void)userSelectedResult:atSortedIndex:forRequest:gotResultsFromDuet:;
- (void)userIgnoredResultsOfBatch:forRequest:afterDelay:;
- (void)userSawNumberOfResults:forBatch:includingNumberOfSuggestions:forRequest:;
+ (void)userSelectedResult:atSortedIndex:forRequest:gotResultsFromDuet:;
+ (void)userIgnoredResultsForRequest:afterDelay:;
@end
