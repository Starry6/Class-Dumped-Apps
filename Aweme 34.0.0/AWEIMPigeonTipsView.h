@interface AWEIMPigeonTipsView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIView topLine;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) IESIMButton closeBtn;
- (void)refreshBackgroundColorWhileHasBackground:;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)p_addSubviews;
- (void)didFetchFullDetailUser:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)topLine;
- (void)setTopLine:;
@end
