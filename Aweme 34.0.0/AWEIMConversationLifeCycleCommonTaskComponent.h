@interface AWEIMConversationLifeCycleCommonTaskComponent : AWEIMComponentBase
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
+ (BOOL)canCreateComponentWithContext:;
@end
