@interface AWEFeedPerformanceEndController : AWEBaseController
@property (nonatomic) AWEFeedFPSSceneTracker fpsTracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scrollViewDidScrollEndWithActive;
- (id)fpsTracker;
- (void)setFpsTracker:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
