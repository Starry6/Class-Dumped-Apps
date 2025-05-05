@interface IESSaaSTIMPBNMessagesPerUserResponseBody : GPBMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) q nextInterval;
@property (nonatomic) BOOL hasNextInterval;
@property (nonatomic) q nextConversationVersion;
@property (nonatomic) BOOL hasNextConversationVersion;
@property (nonatomic) NSMutableArray conversationBadgeCountArray;
@property (nonatomic) Q conversationBadgeCountArray_Count;
@property (nonatomic) q nextCmdIndex;
@property (nonatomic) BOOL hasNextCmdIndex;
+ (id)descriptor;
@end
