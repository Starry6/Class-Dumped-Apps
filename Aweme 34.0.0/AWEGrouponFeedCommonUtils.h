@interface AWEGrouponFeedCommonUtils : NSObject
+ (id)referStringWithPageType:;
+ (id)getFeedSectionLayoutWtihPageType:;
+ (void)hideLiveSmallScreen;
+ (id)getLiveSmallWindowManger;
+ (BOOL)hasLiveSmallWindow;
+ (BOOL)isLiveSmallWindowShowingAtPageType:;
+ (id)liveSmallWindowTrackParamsWithPageContext:;
+ (id)cardInfoWithModel:isClick:;
+ (BOOL)shouldShowRecommendDataWithModel:p1aidPoiIds:p1aidProductIds:;
@end
