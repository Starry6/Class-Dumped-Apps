@interface AWEPluginHostChatGroupImpl : NSObject
@property (nonatomic) UIViewController alertController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestWithParams:completion:;
- (id)scopesFromExtra:;
- (id)checkNetworkResponse:error:;
- (void)requestCreateGroupInfoWithParams:uniqueID:completion:;
- (void)getAuthCodeWithUniqueID:completion:;
- (void)requestOpenIDWithParams:uniqueID:completion:;
- (void)requestCheckGroupInfoWithParams:uniqueID:completion:;
- (void)showOpenPlatformAuthWithParams:uniqueID:completion:;
- (void)showCreateAndCheckGroupAuthWithUniqueID:completion:;
- (void)showAuthAlertViewWithUniqueID:completion:;
- (void)_eventWithName:uniqueID:params:;
- (void)bdp_joinGroupChatWithModel:appID:completion:;
- (void)bdp_transferToAwemeGroupChatConversationId:;
- (void)bdp_joinGroupChatWithModel:completion:;
- (void)bdp_createGroupInfoWithParam:uniqueID:completion:;
- (void)bdp_joinGroupWithParam:uniqueID:completion:;
- (void)bdp_checkGroupInfoWithParam:uniqueID:completion:;
- (void).cxx_destruct;
- (id)alertController;
- (void)setAlertController:;
+ (id)sharedPlugin;
@end
