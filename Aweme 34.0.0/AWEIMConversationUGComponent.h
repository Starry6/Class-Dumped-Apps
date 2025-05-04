@interface AWEIMConversationUGComponent : AWEIMComponentBase
- (void)hostVC_viewDidLoad;
- (void)hostVC_viewDidAppear;
- (void)p_checkUGTaskFinish;
- (void)p_showUGNoticeIfNeeded;
+ (BOOL)canCreateComponentWithContext:;
@end
