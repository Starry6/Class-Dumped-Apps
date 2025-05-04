@interface AWEIMIncentivePushGuideInteractor : NSObject
@property (nonatomic) AWEIMIncentivePushGuideView bannerView;
@property (nonatomic) <AWEIMPushGuideBannerViewDelegate> delegate;
- (void)p_didBecomeActive;
- (void)updateWithChatHasBackground:;
- (void)p_onClickBannerView;
- (id)createIncentivePushBannerView;
- (id)delegate;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (void)setDelegate:;
- (BOOL)isDisplaying;
- (id)bannerView;
- (void)setBannerView:;
+ (id)settingConfigDict;
+ (BOOL)canCreateIncentivePushBanner;
+ (void)p_finishIncentivePushTask;
+ (void)willEnterConversation;
@end
