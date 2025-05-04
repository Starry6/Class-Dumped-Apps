@interface AWEIMDetailComponent : AWEUserDetailBaseComponent
- (id)enterFrom;
- (void)viewWillAppearWithIMStayTimeTracker;
- (void)viewWillDisappearWithIMStayTimeTracker;
- (id)imStayTimelabel;
- (id)imStaytimeKey;
- (void)onRefreshHeaderView:shouldRefreshTabView:;
- (void)viewWillAppear;
- (void)viewDidAppear:;
- (void)viewWillDisappear;
@end
