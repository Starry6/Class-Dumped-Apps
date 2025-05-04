@interface AWEMVPageTrackerController : AWEDCFeedBaseController
@property (nonatomic) {CGPoint=dd} originScrollViewContentOffset;
@property (nonatomic) BOOL isTrackedFirstScreenTime;
@property (nonatomic) double stayDuration;
- (void)detailTableViewControllerDidDisappear:currentAwemeModel:;
- (void)containerScrollViewDidEndDragging:willDecelerate:;
- (void)containerScrollViewDidEndDecelerating:;
- (void)containerScrollViewDidEndScrollingAnimation:;
- (void)containerScrollViewWillBeginDragging:;
- (void)containerViewWillAppear:;
- (void)containerViewWillDisappear:;
- (void)containerScrollViewDidScrollToTop:;
- (double)stayDuration;
- (void)setStayDuration:;
- (void)trackStayTime;
- (id)mvPageContext;
- (void)resetStayDuration;
- (void)setOriginScrollViewContentOffset:;
- (id)originScrollViewContentOffset;
- (void)trackFirstScreenStayTime;
- (void)setIsTrackedFirstScreenTime:;
- (BOOL)isTrackedFirstScreenTime;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)scrollViewDidEndScrolling;
- (void)containerViewDidLoad;
@end
