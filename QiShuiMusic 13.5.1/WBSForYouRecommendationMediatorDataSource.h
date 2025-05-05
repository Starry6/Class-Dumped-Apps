@interface WBSForYouRecommendationMediatorDataSource : NSObject
- (void)emitStartRetrievingRecommendationsPerformanceMarker;
- (void)retrieveRecommendationsMatchingTopic:withCompletionHandler:;
- (void)recommendationsWithTopics:withCompletionHandler:;
- (void)notifyContentsDidChangeFromSource:;
- (void)notifyImageWasUpdatedForRecommendation:;
@end
