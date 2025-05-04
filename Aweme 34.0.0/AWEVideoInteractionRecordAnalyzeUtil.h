@interface AWEVideoInteractionRecordAnalyzeUtil : NSObject
+ (void)recordVideoPlayInteraction:;
+ (void)recordUserDislikeInteraction:;
+ (void)recordUserSkipInteraction:;
+ (void)recordUserSkipInteractionForDislike:;
+ (void)cleanRecordUserSkipInteractionForDislike;
+ (BOOL)userHasSkippedEnoughVideosForDislikeToast;
+ (id)getDislikeItemsInSessionArray;
+ (id)getSkipItemsInSessionArray;
+ (BOOL)needRefetchRecommendFeed;
@end
