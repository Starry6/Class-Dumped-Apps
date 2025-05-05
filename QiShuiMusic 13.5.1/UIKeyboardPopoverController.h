@interface UIKeyboardPopoverController : UIViewController
@property (nonatomic) UIView contentView;
@property (nonatomic) {CGSize=dd} contentSize;
- (id)contentView;
- (id)init;
- (long long)overrideUserInterfaceStyle;
- (BOOL)_canShowWhileLocked;
- (BOOL)isPresented;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setContentView:;
- (id)preferredContentSize;
- (void)setContentSize:;
- (void)viewDidLoad;
- (BOOL)handleHardwareKeyboardEvent:;
@end
