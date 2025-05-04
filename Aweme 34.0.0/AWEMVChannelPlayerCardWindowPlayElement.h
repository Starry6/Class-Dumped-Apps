@interface AWEMVChannelPlayerCardWindowPlayElement : AWEMVChannelPlayerCardBaseElement
@property (nonatomic) UIButton button;
@property (nonatomic) UIImage scaledIconImage;
- (void)updateButtonImage:;
- (id)scaledIconImage;
- (void)setScaledIconImage:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setButton:;
- (void)setData:;
- (void).cxx_destruct;
- (id)button;
- (void)tapAction;
- (id)resizeImage:toSize:;
@end
