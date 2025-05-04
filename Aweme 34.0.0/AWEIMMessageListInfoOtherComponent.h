@interface AWEIMMessageListInfoOtherComponent : AWEIMComponentBase
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)p_fetchConversationInfoOtherData;
- (id)p_routerParamsForInfoOther;
+ (BOOL)canCreateComponentWithContext:;
@end
