@interface IESSaaSTIMPBNConversationMessage : GPBMessage
@property (nonatomic) IESSaaSTIMPBNConversationInfoV2 conversations;
@property (nonatomic) BOOL hasConversations;
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
+ (id)descriptor;
@end
