@interface AWEIMComponentViewController : UIViewController
@property (nonatomic) BOOL notFirstViewDidAppear;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionPublisher:;
- (id)resolveService:;
- (void)setupComponentEnvironment;
- (void)setComponentManager:;
- (BOOL)notFirstViewDidAppear;
- (void)p_observeAppLifeCycle;
- (void)p_appWillResignActive;
- (void)p_appDidBecomeActive;
- (void)p_handleDidEnterBackgroundNotification;
- (void)p_handleWillEnterForegroundNotification;
- (id)resolveService:inContainer:;
- (void)setNotFirstViewDidAppear:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)componentManager;
@end
