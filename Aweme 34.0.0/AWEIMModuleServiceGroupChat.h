@interface AWEIMModuleServiceGroupChat : HTSService
@property (nonatomic) @? showIncentiveChatGroupPanelCompletion;
@property (nonatomic) RxTwoTuple enterPersonalDetailFromAndMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (void)createConversationWithOtherParticipants:type:bizExtension:completion:;
- (void)joinConversation:shortId:bizExtension:completion:;
- (BOOL)shouldShowIndentityVerifyForCheckMessage:;
- (id)tikMonitor;
- (id)groupChatJoinPanelViewModelWithParamDict:;
- (id)createGroupInviteCardViewControllerWithParamDict:;
- (void)updateEnterGroupBlock:forViewController:;
- (void)updateDismissTrackDict:forViewController:;
- (void)observeEventEnterPersonalDetail;
- (id)eventEnterPersonalDetailFromAndMethod;
- (void)enterInviteWechatCommand:enterFrom:enterMethod:closeAction:completeBlock:;
- (void)presentMixVCWithModel:extraParams:;
- (void)didCreateGroupWithResult:;
- (void)setEnterPersonalDetailFromAndMethod:;
- (id)enterPersonalDetailFromAndMethod;
- (id)showIncentiveChatGroupPanelCompletion;
- (void)setShowIncentiveChatGroupPanelCompletion:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
