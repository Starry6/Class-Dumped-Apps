@interface AWENovelVCAdapter : BDNovelBaseVCUtil
- (void)routeURL:userInfo:;
- (void)disableDragBack:disable:;
- (id)routeScheme;
- (BOOL)webShouldHandleRoute:;
- (void)setNavigationBarVisible:visible:;
- (void)configExitGesture:shouldStopExit:;
@end
