@interface AWEECMultiMallVCDefaultAdapter : NSObject
@property (nonatomic) <AWEECMultiMallViewControllerContext> context;
@property (nonatomic) BOOL needForceLandShoppingAfterLogin;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)didFinishLogin;
- (BOOL)needForceLandShoppingAfterLogin;
- (void)setNeedForceLandShoppingAfterLogin:;
- (void)startSetupUI;
- (void)finishSetupUI;
- (BOOL)shouldSlidingVCBeginDragging;
- (BOOL)shouldCategoryInteractive;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithContext:;
- (void)viewDidDisappear:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
@end
