@interface AWEIMMessageTabPushGuideBannerInteractor : AWEIMMessageTabCommonBannerInteractor
@property (nonatomic) AWEIMPushGuideBannerModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)pushGuideBannerViewDidClose;
- (id)bannerViewCreated;
- (BOOL)shouldShowCacheBannerView;
- (void)shouldShowCacheBannerView:;
- (id)modelForCache;
- (void)setupDataWithCacheModel:;
- (void)updateCacheBannerWithView:completion:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
+ (long long)bannerPriorityValue;
@end
