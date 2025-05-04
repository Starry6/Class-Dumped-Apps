@interface AWEIMMessageListGroupForbiddenTipComponent : AWEIMMessageListTopFloatingBaseComponent
@property (nonatomic) NSString tip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onConversationDidUpdateWithConversation:;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)processPunishmentForConversation:;
- (void)dismissForbiddenTipIfNeed;
- (void)showForbiddenNoticeTip:;
- (void).cxx_destruct;
- (id)tip;
- (void)setTip:;
+ (BOOL)canCreateComponentWithContext:;
@end
