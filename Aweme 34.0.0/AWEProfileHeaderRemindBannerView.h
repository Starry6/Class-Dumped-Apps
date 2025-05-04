@interface AWEProfileHeaderRemindBannerView : UIView
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) BDImageView iconView;
@property (nonatomic) YYLabel remindLabel;
@property (nonatomic) DUXButton closeButton;
- (void)clickCloseButton;
- (void)configWithContext:;
- (id)remindLabel;
- (void)setRemindLabel:;
- (void)clickLink;
- (void)p_addTruncationToken;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
- (void)updateUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
