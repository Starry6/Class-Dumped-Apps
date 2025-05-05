@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource
- (void).cxx_destruct;
- (id)initWithTabStore:;
- (void)retrieveRecommendationsMatchingTopic:withCompletionHandler:;
- (void)_createInternalQueueIfNecessary;
@end
