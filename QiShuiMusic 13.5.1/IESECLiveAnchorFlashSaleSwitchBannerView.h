@interface IESECLiveAnchorFlashSaleSwitchBannerView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton switchButton;
@property (nonatomic) <IESECLiveAnchorFlashSaleSwitchBannerViewDelegate> delegate;
@property (nonatomic) BOOL isOn;
- (void)setSwitchButton:;
- (void)switchButtonTapped:;
- (id)init;
- (void)setTitleLabel:;
- (BOOL)isOn;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setIsOn:;
- (id)switchButton;
@end
