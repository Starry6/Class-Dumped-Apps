@interface AWEProtectNickNameInvalidView : UIView
@property (nonatomic) UIImageView invalidImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) DUXButton closeButton;
@property (nonatomic) <AWEProtectNickNameInvalidViewProtocol> delegate;
- (void)closeButtonClicked;
- (id)invalidImageView;
- (void)setInvalidImageView:;
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
