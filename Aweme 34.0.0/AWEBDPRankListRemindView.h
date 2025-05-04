@interface AWEBDPRankListRemindView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIButton knownButton;
- (id)knownButton;
- (void)setKnownButton:;
- (void)setupTitleLabelView;
- (void)setupKnownButton;
- (void)onKnownButtonTap:;
- (void)onCancelButtonTap:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (void)setupCancelButton;
- (void)setupImageView;
@end
