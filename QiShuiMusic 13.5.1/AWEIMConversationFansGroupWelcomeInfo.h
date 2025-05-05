@interface AWEIMConversationFansGroupWelcomeInfo : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSInteger welcomeUpdateValue;
@property (nonatomic) NSString welcomeMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)welcomeMessages;
- (void)configWithGroupManagementInfo:;
- (id)groupManagementManger;
- (void)setGroupManagementWelcomeInfoWithUpdateType:updateValue:welcomeMessages:completion:;
- (void)setWelcomeMessages:;
- (void)setWelcomeUpdateValue:;
- (int)welcomeUpdateValue;
- (void).cxx_destruct;
- (id)conversationID;
- (void)setConversationID:;
- (id)initWithConversationID:;
@end
