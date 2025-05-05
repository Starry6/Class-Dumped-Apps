@interface IESSaaSTIMPBNMessagesInConversationResponseBody : GPBMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
+ (id)descriptor;
@end
