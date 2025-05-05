@interface UIKeyboardEmojiPopoverController : UIKeyboardPopoverController
@property (nonatomic) UIKeyboardLayoutStar layout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)overrideUserInterfaceStyle;
- (void)dealloc;
- (void)setLayout:;
- (id)layout;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)preferredContentSize;
- (void)viewDidLoad;
- (BOOL)handleHardwareKeyboardEvent:;
- (void)keyboardLayout:didSwitchToKeyplane:;
- (id)keyboardLayout:containingViewForActiveKey:inKeyplaneView:;
- (id)keyboardLayout:willChangeRenderConfig:;
- (id)initWithTextInputTraits:;
- (id)initWithTextInputTraits:taskQueue:;
- (id)initWithTextInputTraits:taskQueue:window:;
- (id)initWithTextInputTraits:taskQueue:scrollingDirection:;
- (id)initWithTextInputTraits:taskQueue:scrollingDirection:window:;
- (double)preferredTextFieldHeight;
@end
