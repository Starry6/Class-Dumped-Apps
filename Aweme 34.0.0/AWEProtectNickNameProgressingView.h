@interface AWEProtectNickNameProgressingView : UIView
@property (nonatomic) UIImageView timeImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) DUXButton closeButton;
@property (nonatomic) <AWEProtectNickNameProgressingViewProtocol> delegate;
- (void)closeButtonClicked;
- (id)timeImageView;
- (void)setTimeImageView:;
- (id)init;
- (id)delegate;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (id)subtitleLabel;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
