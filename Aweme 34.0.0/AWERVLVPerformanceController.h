@interface AWERVLVPerformanceController : AWERVBaseController
@property (nonatomic) NSString firstAwemeID;
@property (nonatomic) AWERVLVPerformanceMonitor lvPerformanceMonitor;
- (void)startInit;
- (id)firstAwemeID;
- (void)setFirstAwemeID:;
- (void)trackPerformance;
- (void)bindEvents;
- (void)didConfigPageContext;
- (void)viewDidAppearAfter;
- (void)willRefreshWithAwemeModel:;
- (void)refreshWithAwemeModelBeforeVideoViewControllerUpdate:;
- (void)setLvPerformanceMonitor:;
- (id)lvPerformanceMonitor;
- (void)applicationWillResignActive:;
- (void)viewDidLoad;
- (double)getCurrentTime;
- (void).cxx_destruct;
- (void)didInit;
- (void)viewDidDisappear;
@end
