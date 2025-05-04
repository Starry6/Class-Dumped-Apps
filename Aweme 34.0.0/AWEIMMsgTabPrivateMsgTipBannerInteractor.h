@interface AWEIMMsgTabPrivateMsgTipBannerInteractor : AWEIMMessageTabCommonBannerInteractor
@property (nonatomic) q exposureCount;
@property (nonatomic) BOOL disableShow;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (BOOL)disableShow;
- (void)setDisableShow:;
- (void)messageTabDidDisappear;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;
- (void)p_trackBannerWithEventType:;
- (void)p_recordExposureCount;
- (long long)exposureCount;
- (void)setExposureCount:;
- (void)bannerWillAppearAgain;
- (void)autoChangeWhoCanMesssageMeSetWithCompletion:;
+ (long long)bannerPriorityValue;
@end
