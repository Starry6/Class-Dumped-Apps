@interface CNUIDataCollectionSearchSession : NSObject
@property (nonatomic) BOOL pendingResults;
@property (nonatomic) BOOL pendingSuggestionsResults;
- (void)searchStringDidChange;
- (void)didFetchResultSuggested:;
- (void)didSelectResult:;
- (BOOL)pendingResults;
- (void)setPendingResults:;
- (BOOL)pendingSuggestionsResults;
- (void)setPendingSuggestionsResults:;
+ (void)end;
+ (id)currentSession;
+ (void)begin;
@end
