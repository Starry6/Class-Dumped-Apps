@interface AWEIMMessageTabFriendConversationBannerInteractor : AWEIMMessageTabCommonBannerInteractor
@property (nonatomic) BOOL dontTrackBannerShow;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)trackBannerShow;
- (void)trackBannerWithEventType:;
- (void)setDontTrackBannerShow:;
- (BOOL)dontTrackBannerShow;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;
+ (long long)bannerPriorityValue;
@end
