@interface AWEBannerRevisitView : UIView
@property (nonatomic) BOOL hasJumpButton;
@property (nonatomic) UIImageView background;
@property (nonatomic) NSString backgroundUrl;
@property (nonatomic) @? closeAction;
@property (nonatomic) @? jumpAction;
- (id)backgroundUrl;
- (void)setBackgroundUrl:;
- (void)setupCloseButton;
- (id)jumpAction;
- (void)onClickCloseButton:;
- (void)setupBackground;
- (void)setJumpAction:;
- (void)showOn:;
- (void)setHasJumpButton:;
- (void)setupJumpButton;
- (BOOL)hasJumpButton;
- (void)onClickJumpButton:;
- (void)setCloseAction:;
- (id)initWithFrame:;
- (id)background;
- (void)setBackground:;
- (void).cxx_destruct;
- (id)closeAction;
- (void)setupUI;
@end
