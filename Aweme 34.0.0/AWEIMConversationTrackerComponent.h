@interface AWEIMConversationTrackerComponent : AWEIMComponentBase
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)setBcmPageParams;
+ (BOOL)canCreateComponentWithContext:;
@end
