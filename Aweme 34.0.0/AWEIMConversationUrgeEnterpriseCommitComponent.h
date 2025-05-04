@interface AWEIMConversationUrgeEnterpriseCommitComponent : AWEIMComponentBase
@property (nonatomic) <IESIMConversationDeleteMessageAfterDisplayInterface> deleteMessageService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)linkTextBehaviorOccursWith:message:;
- (id)vcParent;
- (void)setDeleteMessageService:;
- (id)deleteMessageService;
- (void)urgeEnterpriseCommitWithLatestUrgeNoticeMessage:scene:checkSameLimit:;
- (id)findLatestNotNoticeMessage;
- (id)requestUrgeEnterpriseWithParams:;
- (id)handleSuccessUrgeEnterpriseCommitWithMessage:response:scene:checkLimit:;
- (id)findLatestUrgeNoticeMessageWithMessage:response:checkLimit:;
- (void).cxx_destruct;
@end
