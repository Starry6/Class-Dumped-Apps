@interface AWEPOIHalfScreenContainerService : NSObject
+ (id)showHalfScreenWithParams:contentController:completion:shouldClose:close:;
+ (id)buildHalfScreenContainerParametersWithParams:;
+ (id)showHalfScreenWithHalfScreenContainerParameters:contentController:completion:shouldClose:close:;
+ (id)p_showHalfScreenWithParams:contentController:completion:shouldClose:close:;
+ (void)p_showLiveFloatOnTopIfNeeded:containerViewController:fromViewController:;
@end
