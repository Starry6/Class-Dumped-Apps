@interface AWEIMMessageTabOptPushBannerInteractor : AWEIMMessageTabCommonBannerInteractor
@property (nonatomic) BOOL disableShow;
@property (nonatomic) BOOL didJumpToSystemSetting;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (BOOL)disableShow;
- (void)setDisableShow:;
- (id)bannerViewCreated;
- (void)setDidJumpToSystemSetting:;
- (void)openPushSettingComplete:;
- (void)trackBannerViewDidShow;
- (BOOL)didJumpToSystemSetting;
- (void)openReceiveRangeComplete:;
- (void)onTabBarDidChangeToMessageTab;
- (void)shouldShowCacheBannerView:;
- (void)willEnterForeground;
+ (long long)bannerPriorityValue;
+ (void)p_trackBannerClickWithShowReason:clickType:;
+ (void)markCloseView;
+ (id)freqControlStorage;
+ (void)writeFreqControlStorage:;
+ (void)p_trackBannerShowWithShowReason:;
@end
