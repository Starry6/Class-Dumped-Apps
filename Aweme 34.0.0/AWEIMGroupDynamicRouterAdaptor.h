@interface AWEIMGroupDynamicRouterAdaptor : NSObject
+ (id)customInitialViewControllerWithClass:;
+ (Class)groupJoinPanelRouterClass;
+ (void)groupJoinPanelCustomTransitionWithTransitionInfo:;
+ (void)groupBotSelectCustomTransitionWithTransitionInfo:;
+ (id)customInitialViewControllerWithClassName:;
@end
