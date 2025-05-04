@interface AWEIMSkylightLiveCheckComponent : AWEIMComponentBase
@property (nonatomic) <AWELiveModuleService> liveModuleService;
@property (nonatomic) <AWELiveCheckDataManagerService> liveCheckService;
@property (nonatomic) <AWEIMSkylightViewInterface> skylightViewInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)liveModuleService;
- (void)setLiveModuleService:;
- (id)liveCheckService;
- (void)onLiveUpdateReceive:PageType:;
- (void)setLiveCheckService:;
- (id)skylightViewInterface;
- (void)setSkylightViewInterface:;
- (void)skylightDidEndScroll;
- (void)didRefreshSkylightView;
- (void)subscribeLiveCheck;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
