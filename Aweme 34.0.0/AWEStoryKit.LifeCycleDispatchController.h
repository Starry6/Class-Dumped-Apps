@interface AWEStoryKit.LifeCycleDispatchController : AWEStoryKit.StoryKitBaseController
- (void)onThemeChanged;
- (void)viewWillDisappear:;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void)viewDidAppear:;
@end
