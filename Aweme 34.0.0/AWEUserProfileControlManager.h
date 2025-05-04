@interface AWEUserProfileControlManager : NSObject
+ (BOOL)percentCompletion;
+ (id)needShowCompletePercentTipLabelsWith:;
+ (BOOL)showPercentAnimation;
+ (void)showPercentAnimationCompletion;
+ (id)p_showPercentAnimationTimeKey;
+ (id)p_showPercentAnimationCountKey;
+ (id)p_bannerTipsTimeKey;
+ (id)p_bannerTips;
+ (id)p_bannerTipsIndexKey;
+ (long long)p_profileGuideShowNumber;
+ (id)showBannerTipsContent;
+ (void)closeShowBannerTipsContent;
@end
