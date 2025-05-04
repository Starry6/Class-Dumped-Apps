@interface AWEIMCommonTopFloatView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) IESIMButton closeBtn;
@property (nonatomic) IESIMButton actionBtn;
@property (nonatomic) UIView contentView;
@property (nonatomic) AWEIMCommonTopFloatViewConfig config;
- (void)p_setupUI;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)actionBtn;
- (void)setActionBtn:;
- (void)p_didClickCloseButton;
- (void)p_didClickActionButton;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setTipLabel:;
- (id)tipLabel;
@end
