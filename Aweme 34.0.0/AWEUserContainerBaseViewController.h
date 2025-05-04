@interface AWEUserContainerBaseViewController : UIViewController
@property (nonatomic) AWEUserContainerBaseViewModel viewModel;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)skipAction;
- (void)tapGestureAction:;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:;
- (void)handleKeyboardNSNotification;
- (void)handleKeyboardWillChange:;
- (void)addTapGestureRecognizer;
- (void)viewControllerBindingUI;
- (void)cursorFocusWhenAppear;
- (void)dealloc;
- (id)viewModel;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)closeAction;
- (void)backAction;
@end
