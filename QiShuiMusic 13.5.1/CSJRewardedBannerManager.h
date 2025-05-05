@interface CSJRewardedBannerManager : NSObject
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) CSJRewardedBannerRenderConfig renderConfig;
@property (nonatomic) UIView rewardedBannerConainerView;
@property (nonatomic) CSJRewardedBannerUgenRender rewardedBannerUgenRender;
@property (nonatomic) double rewardedBannerTop;
- (id)adSlot;
- (id)initWithMaterialMeta:slot:;
- (id)materialMeta;
- (id)rewardedBannerConainerView;
- (double)rewardedBannerTop;
- (id)rewardedBannerUgenRender;
- (void)setAdSlot:;
- (void)setMaterialMeta:;
- (void)setRewardedBannerConainerView:;
- (void)setRewardedBannerTop:;
- (void)setRewardedBannerUgenRender:;
- (void)showRewardedBannerInContentView:actionHandler:;
- (id)renderConfig;
- (void)setRenderConfig:;
- (void).cxx_destruct;
- (void)setupConfig;
@end
