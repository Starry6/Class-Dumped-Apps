@interface AWELiveStreamInteractDynamicContainerElement : AWELiveBaseElement
@property (nonatomic) IESLiveInteractDynamicContainerPreStreamImpl dynamicContainerPreStreamImpl;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisAppear;
- (void)onUserEnterLiveRoom:;
- (void)onUserQuitLiveRoom:;
- (void)preloadElement;
- (void)setDynamicContainerPreStreamImpl:;
- (id)dynamicContainerPreStreamImpl;
- (void)prepareForReuse;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
