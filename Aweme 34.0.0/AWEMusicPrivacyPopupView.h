@interface AWEMusicPrivacyPopupView : AWEMusicStreamingBasePopupView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIView topLineView;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) UIView<AWESettingSwitchProtocol> activeTipsSwitch;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) BOOL isRequesting;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)switchControlDidChanged:;
- (id)activeTipsSwitch;
- (void)setActiveTipsSwitch:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setImageView:;
- (id)imageView;
- (void)setupView;
- (void)setTopLineView:;
- (id)hintLabel;
- (void)setHintLabel:;
- (id)topLineView;
@end
