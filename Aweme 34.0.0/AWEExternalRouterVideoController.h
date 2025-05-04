@interface AWEExternalRouterVideoController : AWEAwemeFeedBaseController
- (void)videoController:didStartPlayPreventedWithReason:;
- (void)videoController:playBackFailedWithError:;
- (void)viewDidLoad;
@end
