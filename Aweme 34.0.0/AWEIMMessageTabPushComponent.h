@interface AWEIMMessageTabPushComponent : AWEIMComponentBase
@property (nonatomic) NSDictionary startIMTrackerInfo;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)setStartIMTrackerInfo:;
- (void)p_trackIMOuterPushWithKey:;
- (id)startIMTrackerInfo;
- (void).cxx_destruct;
@end
