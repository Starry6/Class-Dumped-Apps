@interface AWELivePreStreamMonitorElement : AWELiveBusinessBaseElement
@property (nonatomic) BOOL hasBeginDragging;
@property (nonatomic) q beginDraggingTime;
@property (nonatomic) q endDraggingTime;
@property (nonatomic) {CGPoint=dd} downLocation;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (void)onUserStartEnterLiveRoom:;
- (void)viewController_willBeginDragging:;
- (void)viewController_willEndDragging:velocity:;
- (void)preloadElement;
- (void)setHasBeginDragging:;
- (void)setBeginDraggingTime:;
- (void)setEndDraggingTime:;
- (BOOL)hasBeginDragging;
- (void)setDownLocation:;
- (id)downLocation;
- (long long)endDraggingTime;
- (long long)beginDraggingTime;
- (void)p_configUserInteractionMonitor:;
- (void)p_monitorLayoutOnEnter;
- (void)setData:;
- (void)reset;
@end
