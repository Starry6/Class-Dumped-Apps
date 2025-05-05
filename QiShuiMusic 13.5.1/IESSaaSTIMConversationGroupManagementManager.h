@interface IESSaaSTIMConversationGroupManagementManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)checkIsExistConversationWithCid:completion:;
+ (void)configGroupManagementInfo:fromPb:;
+ (void)fetchConversationGroupManagementInfoWithConversationID:completion:;
+ (void)invokeGroupManagementCompletionBlock:domain:code:userInfo:;
+ (void)setConversationGroupManagementWelcomeInfoWithConversationID:updateType:updateValue:greetingMessages:completion:;
+ (void)updateGroupManagementInfo:conversationId:inboxType:completion:;
+ (void)updateSetGroupManagementGreetingInfoWithConversationID:updateType:updateValue:greetingMessages:completion:;
+ (id)sharedInstance;
@end
