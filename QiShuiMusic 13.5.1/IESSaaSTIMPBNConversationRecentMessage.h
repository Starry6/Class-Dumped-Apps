@interface IESSaaSTIMPBNConversationRecentMessage : GPBMessage
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) q version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSInteger badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSMutableArray extMessagesArray;
@property (nonatomic) Q extMessagesArray_Count;
+ (id)descriptor;
@end
