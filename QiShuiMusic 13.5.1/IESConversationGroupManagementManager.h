@interface IESConversationGroupManagementManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchGroupManagementInfoWithConversationID:completion:;
- (void)setGroupManagementWelcomeInfoWithConversationID:updateType:updateValue:welcomeMessages:completion:;
@end
