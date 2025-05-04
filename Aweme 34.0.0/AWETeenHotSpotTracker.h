@interface AWETeenHotSpotTracker : NSObject
+ (void)trackTrendingTopicShowWithModel:itemID:enterFrom:enterPosition:showType:extra:;
+ (void)trackTrendingTopicShowWithModel:itemID:enterFrom:;
+ (void)trackTrendingSwitchWithModel:enterMethod:rank:hotSpotCount:;
+ (void)trackTrendingDuration:fromGroupID:previousPage:enterFrom:;
+ (void)trackTrendingTopicClickWithModel:itemID:enterFrom:;
+ (void)trackTrendingListShowWithHotSpotCount:;
+ (void)trackTrendingTopicShowWithModel:itemID:enterFrom:enterPosition:;
+ (void)trackTrendingTopicShowWithModel:itemID:enterFrom:enterPosition:showType:;
+ (void)trackTrendingTopicClickWithModel:itemID:enterFrom:enterPosition:showType:;
+ (void)trackTrendingTopicClickWithModel:itemID:enterFrom:enterPosition:showType:extra:;
+ (void)trackTrendingPageShowWithModel:itemID:enterFrom:;
@end
