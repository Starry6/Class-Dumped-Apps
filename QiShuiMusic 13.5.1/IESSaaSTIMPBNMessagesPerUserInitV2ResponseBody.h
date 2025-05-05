@interface IESSaaSTIMPBNMessagesPerUserInitV2ResponseBody : GPBMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) NSMutableArray conversationsArray;
@property (nonatomic) Q conversationsArray_Count;
@property (nonatomic) q perUserCursor;
@property (nonatomic) BOOL hasPerUserCursor;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) NSInteger initType;
@property (nonatomic) BOOL hasInitType;
@property (nonatomic) q cmdStartIndex;
@property (nonatomic) BOOL hasCmdStartIndex;
@property (nonatomic) q nextConversationVersion;
@property (nonatomic) BOOL hasNextConversationVersion;
+ (id)descriptor;
@end
