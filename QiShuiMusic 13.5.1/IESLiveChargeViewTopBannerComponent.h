@interface IESLiveChargeViewTopBannerComponent : UIView
@property (nonatomic) double width;
@property (nonatomic) IESLiveChargeViewModel viewModel;
@property (nonatomic) double bannerHeight;
@property (nonatomic) UIImageView banner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didBalanceUpdated;
- (void)didRechargeSuccess:error:;
- (void)tapBanner;
- (void)updateViewModel:;
- (id)banner;
- (void)reload;
- (id)viewModel;
- (void)layoutSubviews;
- (id)initWithWidth:;
- (void)setWidth:;
- (double)width;
- (void)setBanner:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)setupUI;
- (double)bannerHeight;
- (void)setBannerHeight:;
- (double)viewHeight;
@end
