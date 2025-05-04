@interface AWEPlayInteractionAdActivityElement : AWEPlayInteractionLeftElement
@property (nonatomic) # componentClass;
@property (nonatomic) NSObject<AWEAdActivityElementInsideComponentProtocol> insideComponent;
@property (nonatomic) BOOL hide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:;
- (void)prepareForActivate;
- (void)viewDidDisposed;
- (void)setComponentClass:;
- (void)setInsideComponent:;
- (id)insideComponent;
- (BOOL)hide;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (Class)componentClass;
+ (id)activateInfoWithContext:;
@end
