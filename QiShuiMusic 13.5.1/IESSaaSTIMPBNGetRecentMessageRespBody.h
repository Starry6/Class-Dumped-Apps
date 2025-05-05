@interface IESSaaSTIMPBNGetRecentMessageRespBody : GPBMessage
@property (nonatomic) q nextConversationVersion;
@property (nonatomic) BOOL hasNextConversationVersion;
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
+ (id)descriptor;
@end
