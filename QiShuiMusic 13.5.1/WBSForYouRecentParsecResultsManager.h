@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource
@property (nonatomic) NSArray recentRecommendations;
- (void).cxx_destruct;
- (void)retrieveRecommendationsMatchingTopic:withCompletionHandler:;
- (void)_createInternalQueueIfNecessary;
- (void)appendResultsIfApplicable:;
- (void)appendResultsIfApplicable:withDelayedExistenceCheck:;
- (id)_bestAcceptableImageForSFResult:;
- (BOOL)_hasPermissibleResultTypeForResult:;
- (id)recentRecommendations;
- (void)clearAllResults;
- (id)_cacheEnsuringExistence;
+ (id)recommendationsMatchingTopic:fromArray:;
@end
