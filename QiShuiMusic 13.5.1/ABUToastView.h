@interface ABUToastView : UIView
@property (nonatomic) ABUToastViewConfig config;
@property (nonatomic) UILabel msgLbl;
@property (nonatomic) NSString viewID;
- (id)msgLbl;
- (void)setMsgLbl:;
- (void)setMssage:;
- (void)setwillHide;
- (void)setwillShow;
- (id)showWithTitle:;
- (void)statusBarOrientationChange:;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)viewID;
- (void).cxx_destruct;
- (id)config;
- (void)updateFrame;
- (void)setViewID:;
- (void)createUI;
+ (void)showWithTitle:origin:hideDelay:;
+ (id)_showWithTitle:config:;
+ (void)hideWithToastID:;
+ (id)showWithTitle:;
+ (id)showWithTitle:config:;
+ (id)toastDict;
+ (id)mainWindow;
@end
