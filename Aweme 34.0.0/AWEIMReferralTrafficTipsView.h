@interface AWEIMReferralTrafficTipsView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView topLine;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) AWEButton closeBtn;
@property (nonatomic) AWEButton reportBtn;
@property (nonatomic) UILabel tipLabel;
- (void)refreshBackgroundColorWhileHasBackground:;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)p_addSubViews;
- (void)didFetchMessage:;
- (id)reportBtn;
- (void)themeUpdated;
- (void)setReportBtn:;
- (void)dealloc;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)topLine;
- (void)setTopLine:;
@end
