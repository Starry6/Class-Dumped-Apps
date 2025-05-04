@interface AWEGrouponDialogBottomBarManager : NSObject
+ (id)handleBottomBarPriorityWithModel:targetViewOffsetY:targetVC:;
+ (void)handleBottomBarPriorityWithTargetVC:dialogContainerView:targetViewOffsetY:;
+ (void)handleBottomBarPriorityWithResponse:dialogContainerView:;
@end
