@interface DYOpenToast : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) @? completeBlock;
@property (nonatomic) @? secondBlock;
@property (nonatomic) NSTimer timer;
- (void)setSecondBlock:;
- (id)completeBlock;
- (void)destroyTimer;
- (id)secondBlock;
- (void)setCompleteBlock:;
- (void)setupTimer:duration:;
- (void)setupToastUI;
- (void)showInView:duration:;
- (void)showInWindow;
- (void)showInWindow:;
- (void)dealloc;
- (void)setLabel:;
- (id)label;
- (void)setTimer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)autoDismiss;
- (id)timer;
- (void)showInView:;
- (void)updateText:;
+ (id)colorWithRGBHex:alpha:;
+ (void)debugToast:;
+ (void)internalToast:;
+ (void)showAlertToast:completion:;
+ (void)showAlertToast:duraion:completion:;
+ (void)showToast:completeBlock:;
+ (void)showToast:duration:completeBlock:;
+ (void)showToast:inView:duration:secondBlock:completeBlock:;
+ (void)showToastAndClean:;
+ (void)showToastAndClean:completeBlock:;
+ (void)showToastAndClean:duration:completeBlock:;
+ (id)toastArray;
+ (id)toastFrequenceCache;
+ (void)showToast:;
+ (void)setConfig:;
+ (void)clean;
@end
