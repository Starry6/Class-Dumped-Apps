@interface AWEUserMultitaskingHintView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) DUXButton backButton;
@property (nonatomic) @? backAction;
- (void)p_setupUI;
- (id)backButton;
- (void)setBackButton:;
- (id)initWithFrame:;
- (void)setBackAction:;
- (id)containerView;
- (void)setSubtitleLabel:;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)backAction;
- (void)setImageView:;
- (id)subtitleLabel;
- (id)imageView;
@end
