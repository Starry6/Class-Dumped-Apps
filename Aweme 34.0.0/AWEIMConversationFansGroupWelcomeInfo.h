@interface AWEIMConversationFansGroupWelcomeInfo : NSObject
@property (nonatomic) NSString conversationID;
@property (nonatomic) NSInteger welcomeUpdateValue;
@property (nonatomic) NSString welcomeMessages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWelcomeMessages:;
- (void)setWelcomeUpdateValue:;
- (id)groupManagementManger;
- (id)__checkIndentityForErr:;
- (void)configWithGroupManagementInfo:;
- (void)setGroupManagementWelcomeInfoWithUpdateType:updateValue:welcomeMessages:completion:;
- (int)welcomeUpdateValue;
- (id)welcomeMessages;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setConversationID:;
- (id)initWithConversationID:;
@end
