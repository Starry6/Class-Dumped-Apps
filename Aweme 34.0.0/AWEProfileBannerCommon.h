@interface AWEProfileBannerCommon : NSObject
+ (BOOL)enableDynamicCover:;
+ (double)bannerHeight:containerSize:;
+ (double)normalBannerHeightWithBannerStyle:containerSize:;
+ (double)bannerBottomOverlapWithUserModel:isFromHomepage:bannerStyle:containerSize:;
+ (id)fixContainerSizeIfNeeded:;
+ (double)topLeadingNewBetweenScreenUpperEdgeAndAvatarWithBannerStyle:containerSize:;
+ (double)bannerBottomOverlapNewWithBannerStyle:containerSize:;
+ (double)topLeadingBetweenBannerAndListViewWithBannerStyle:containerSize:;
+ (double)avatarBufferHeight;
+ (BOOL)enableTopVideo:;
+ (double)editBannerHeightWithContainerSize:;
+ (double)maxBannerHeightWithContainerSize:;
+ (double)fullScreenTopOffsetYWithBannerStyle:containerSize:;
+ (BOOL)shouldShowNormalBannerViewWithUserModel:;
+ (id)timingFunction;
@end
