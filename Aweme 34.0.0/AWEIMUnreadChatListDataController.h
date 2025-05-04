@interface AWEIMUnreadChatListDataController : AWEIMChatListDataControllerBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createChatManager;
- (void)onDemoteStateChangedWithDemoteSet:unDemoteSet:;
- (BOOL)iesim_shouldFilterUnreadCountReportForConversation:useConvLastMsgCreateTime:;
- (void)customizeConfig:;
- (BOOL)iesim_shouldFilterConversation:chatDataControllerType:filterReason:;
- (BOOL)iesim_shouldFilterSDKConversation:settingInfo:coreInfo:chatDataControllerType:;
- (BOOL)iesim_shouldFilterUnreadCountReportForConversation:;
- (BOOL)iesim_shouldIgnoreFilterCacheForConversation:;
- (id)init;
- (void)dealloc;
@end
