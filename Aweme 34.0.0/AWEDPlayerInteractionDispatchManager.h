@interface AWEDPlayerInteractionDispatchManager : AWEShellControllerManager
@property (nonatomic) AWEDPlayerInteractionViewConfig viewConfig;
@property (nonatomic) AWEPageContext<AWEDPlayerPageContextProtocol> context;
@property (nonatomic) BOOL loadBelowControllers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (id)viewConfig;
- (void)setViewConfig:;
- (BOOL)shouldFailedGestureRecognizer:;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (BOOL)shouldReceiveGestureRecognizer:touch:;
- (void)setLoadBelowControllers:;
- (BOOL)loadBelowControllers;
- (id)classNameArrayBelowBaseUI;
- (id)classNameArrayAboveBaseUI;
- (void)loadBelowBaseUIControllersWithViewController:rootView:withContext:;
- (void)loadAboveBaseUIControllersWithViewController:rootView:withContext:;
- (id)initWithViewConfig:;
- (id)controllersBySelector:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
