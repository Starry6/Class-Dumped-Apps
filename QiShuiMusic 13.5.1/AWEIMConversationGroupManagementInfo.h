@interface AWEIMConversationGroupManagementInfo : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) <AWEIMConversationFansGroupWelcomeInfoProtocol> welcomeInfoModel;
@property (nonatomic) <IESConversationGroupManagementProtocol> groupManagementInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getGroupManagementInfoWithCompletion:;
- (id)groupManagementInfo;
- (id)groupManagementManger;
- (void)p_configGroupManagementInfoWithInfo:;
- (void)setGroupManagementInfo:;
- (void)setWelcomeInfoModel:;
- (id)welcomeInfoModel;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:;
- (id)initWithConversationID:;
@end
