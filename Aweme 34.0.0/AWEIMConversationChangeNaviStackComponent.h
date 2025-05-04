@interface AWEIMConversationChangeNaviStackComponent : AWEIMComponentBase
- (void)hostVC_viewDidAppear;
- (void)resetChildViewControllersIfNeeded;
+ (BOOL)canCreateComponentWithContext:;
@end
