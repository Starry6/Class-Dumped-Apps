@interface AWEPadKeyboardBindingsTipsView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel tipsTitleLabel;
@property (nonatomic) @? onDidDismissCallback;
- (id)tipsTitleLabel;
- (void)setTipsTitleLabel:;
- (void)setOnDidDismissCallback:;
- (BOOL)keyboardTipsViewLayoutCrashFixEnable;
- (id)onDidDismissCallback;
- (id)createNormalKeyTipsView:tips:;
- (id)createArrowTipsView;
- (id)arrowIconViewWithImageName:;
- (void)show;
- (id)initWithFrame:;
- (id)contentView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)hitTest:withEvent:;
- (void)setupView;
@end
