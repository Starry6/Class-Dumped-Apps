@interface AWEIMMigratingAuthorizationTopNoticeTipView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) @? cancelClickBlock;
@property (nonatomic) @? actionClickBlock;
- (void)refreshBackgroundColorWhileHasBackground:;
- (id)initWithTipLabelText:actionButtonText:viewWidth:;
- (void)setActionClickBlock:;
- (void)setCancelClickBlock:;
- (void)setupUIWithViewWidth:;
- (void)didClickCloseButton:;
- (void)didClickActionButton:;
- (id)cancelClickBlock;
- (id)actionClickBlock;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)actionButton;
- (void)setActionButton:;
- (void)setCloseButton:;
- (id)closeButton;
@end
