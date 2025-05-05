@interface WBSCloudHistoryMergeOperation : NSObject
- (void).cxx_destruct;
- (id)initWithDatabase:fetchResult:;
- (void)mergeWithCompletion:;
- (void)_updateClientVersions;
- (void)_replayAndAddTombstones:;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_loadTombstonesWithCompletion:;
- (void)_buildRedirectChains;
- (void)_filterVisitsByTombstones;
- (void)_lookUpExistingItemsWithCompletion:;
- (void)_removeDuplicateVisits;
- (void)_lookupRedirectChainSourcesWithCompletion:;
- (void)_mergeVisitsWithCompletion:;
@end
