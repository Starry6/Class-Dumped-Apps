@interface IESSaaSTIMPBNConversationSetRoleRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) GPBInt64Int32Dictionary roles;
@property (nonatomic) Q roles_Count;
+ (id)descriptor;
@end
