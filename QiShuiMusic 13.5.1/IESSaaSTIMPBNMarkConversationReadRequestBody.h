@interface IESSaaSTIMPBNMarkConversationReadRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q readMessageIndex;
@property (nonatomic) BOOL hasReadMessageIndex;
@property (nonatomic) q convUnreadCount;
@property (nonatomic) BOOL hasConvUnreadCount;
@property (nonatomic) q totalUnreadCount;
@property (nonatomic) BOOL hasTotalUnreadCount;
@property (nonatomic) q readMessageIndexV2;
@property (nonatomic) BOOL hasReadMessageIndexV2;
@property (nonatomic) NSInteger readBadgeCount;
@property (nonatomic) BOOL hasReadBadgeCount;
@property (nonatomic) NSString ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) q serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
+ (id)descriptor;
@end
