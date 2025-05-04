@interface AWEIMMessageTabViewControllerEventComponent : AWEIMComponentBase
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)handleEnterMessageTabEvent;
- (void)onTabBarDidChangeNotification:;
@end
