@interface AWEIMGeneralAnchorView : UIView
@property (nonatomic) AWEIMHighlightControl anchorView;
@property (nonatomic) UIStackView contentView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? tappedAction;
- (void)p_setupView;
- (void)p_anchorViewTapped;
- (void)configWithIconName:title:;
- (void)makeAnchorViewHidden:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (id)anchorView;
- (void)setAnchorView:;
- (void)setIconImageView:;
- (void)setTappedAction:;
- (id)tappedAction;
@end
