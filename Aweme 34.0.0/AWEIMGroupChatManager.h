@interface AWEIMGroupChatManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createGroupWithContext:;
- (void)handleInviteGroupCardWithConversationID:andCheckDict:;
- (void)handleInviteGroupToastWithCheckDict:;
- (void)transferToCreateGroupVCV2WithContext:completion:;
- (void)addGroupCatagoryToTrackParams:withConversation:;
- (void)trackCreateGroupWithTrackParams:result:;
- (BOOL)needUseCreateGroupPanelV2;
- (BOOL)canCreateServiceBusinessGroup;
- (id)joinGroupWithContext:;
- (BOOL)canCreatePublicGroup;
- (id)generateCreateGroupPanelViewControllerV2WithContext:;
- (void)__addTrackInfoToBizDict:withContext:;
- (void)__trackCreateGroupWithBizDict:duration:convId:response:error:context:;
- (void)__trackCreateGroupQosStartIfNeededWithContext:;
- (void)__addTrackInfoToBizDict:withJoinContext:;
- (void)__trackJoinGroupWithBizDict:convId:duration:passThroughParams:response:error:;
- (id)__listViewControllerPresenterWithContext:;
- (BOOL)p_fullPanelABEnable;
- (id)__isSuccessWithResponse:error:;
@end
