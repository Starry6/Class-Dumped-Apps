@interface IESLiveSaaSBannerBottomView : UIView
@property (nonatomic) UIImageView backgroundImage;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView packUpImage;
@property (nonatomic) UIButton packupBtn;
@property (nonatomic) q activityBannerHeight;
- (void)setPackUpImage:;
- (void)_configWithFormat:imageURLs:backgroundColor:;
- (long long)activityBannerHeight;
- (void)changePackupImageWithStatus:;
- (void)configWithBannerModel:;
- (id)packUpImage;
- (id)packupBtn;
- (void)setActivityBannerHeight:;
- (void)setPackupBtn:;
- (void)showOnView:;
- (void)setTitleLabel:;
- (void)setBackgroundImage:;
- (id)backgroundImage;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)_setupUI;
@end
