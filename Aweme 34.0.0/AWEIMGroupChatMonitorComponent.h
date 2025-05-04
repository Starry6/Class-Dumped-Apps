@interface AWEIMGroupChatMonitorComponent : AWEIMComponentBase
@property (nonatomic) AWEIMConversationContext conversationContext;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMGroupChatMonitorTrigger trigger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:;
- (void)__trackEvent:params:;
- (void)elementLayoutDone:;
- (void)__endMonitorAll;
- (void)__startMonitorAll;
- (void)triggerTrackEvent:params:;
- (void)setTrigger:;
- (id)trigger;
- (void)dealloc;
- (void).cxx_destruct;
- (id)conversation;
- (id)conversationContext;
+ (BOOL)canCreateComponentWithContext:;
@end
