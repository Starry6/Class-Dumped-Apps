@interface AWEIMJoinGroupApplyNoticeView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEIMTopNoticeTipViewConfig config;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) @? cancelClickBlock;
@property (nonatomic) @? actionClickBlock;
- (void)refreshBackgroundColorWhileHasBackground:;
- (void)setActionClickBlock:;
- (void)setCancelClickBlock:;
- (void)didClickCloseButton:;
- (void)didClickActionButton:;
- (id)cancelClickBlock;
- (id)actionClickBlock;
- (void)layoutMySubviews;
- (void)updateTipViewWithConfig:;
- (void)setConfig:;
- (id)blurView;
- (void)setBlurView:;
- (id)config;
- (id)initWithFrame:;
- (void)setup;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)actionButton;
- (void)setActionButton:;
- (void)setCloseButton:;
- (id)closeButton;
@end
