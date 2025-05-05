@interface IESSaaSTIMPBNStrangerConversation : GPBMessage
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger unread;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) IESSaaSTIMPBNMessageBody lastMessage;
@property (nonatomic) BOOL hasLastMessage;
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) NSMutableArray participantsArray;
@property (nonatomic) Q participantsArray_Count;
@property (nonatomic) NSInteger badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
