@interface AWELifeFeedsComponentShowPlugin : AWELifeFeedsBasePlugin
@property (nonatomic) <AWELifeFeedsComponentLifeCycle> delegate;
- (void)pageDidScroll:scrollView:;
- (void)hostPageDidScroll:scrollView:hostPageScrollViewOffset:;
- (void)viewDidEnterBackground;
- (void)viewDidEnterForeground;
- (void)componentView:didBindViewModel:;
- (void)checkComponentsShowStatusInPage:scrollView:reason:;
- (void)checkComponentShowStatus:visibleRectToWindow:reason:;
- (void)setupComponentShowStatus:newShowRatio:reason:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)viewDidAppear;
- (void)viewDidDisappear;
@end
