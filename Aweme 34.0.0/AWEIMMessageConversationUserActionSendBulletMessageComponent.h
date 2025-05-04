@interface AWEIMMessageConversationUserActionSendBulletMessageComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BFTask firstRenderTask;
@property (nonatomic) BOOL isHitRoleID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)willFilterMessage:;
- (BOOL)shouldSendUserActionWithModel:;
- (BOOL)isEnterConFirstTimeWithModel:;
- (void)setIsHitRoleID:;
- (void)setFirstRenderTask:;
- (void)sendUserActionBulletMessageIfNeed:finalModel:;
- (BOOL)shouldFilterThisMessage:;
- (BOOL)preCheckShouleHandleSendBulletMessageWithModel:;
- (id)firstRenderTask;
- (BOOL)checkHasSendBulletMessage:;
- (BOOL)checkHasSameBulletMessage:;
- (BOOL)isHitRoleID;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
@end
