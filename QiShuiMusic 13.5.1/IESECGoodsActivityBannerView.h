@interface IESECGoodsActivityBannerView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) IESECGoodsMarketingFloorModel bannerActivity;
@property (nonatomic) <IESECGoodsBannerActivityDelegate> delegate;
- (id)bannerActivity;
- (id)initWithBannerActivity:;
- (void)openActivityPage;
- (void)setBannerActivity:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setupUI;
@end
