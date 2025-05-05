@interface WBSFrequentlyVisitedSitesController : NSObject
@property (nonatomic) NSArray frequentlyVisitedSites;
- (id)frequentlyVisitedSites;
- (BOOL)_saveFrequentlyVisitedSites:;
- (void)clearFrequentlyVisitedSites;
- (void).cxx_destruct;
- (id)_canonicalizedFavoritesURLStringSet;
- (id)initWithHistory:bannedURLStore:;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (float)_scoreForHistoryItem:;
- (void)_updateFrequentlyVisitedSitesWithCandidates:;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
+ (float)scoreForHistoryItem:atTime:;
+ (float)scoreForHistoryItem:atTime:withMinimumVisitCount:;
+ (float)scoreWithHistoryItemForVisitScoring:historyItemForURLScoring:atTime:;
+ (float)scoreWithHistoryItemForVisitScoring:historyItemForURLScoring:atTime:withMinimumVisitCount:;
@end
