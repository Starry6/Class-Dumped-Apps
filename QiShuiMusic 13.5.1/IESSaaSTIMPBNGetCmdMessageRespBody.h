@interface IESSaaSTIMPBNGetCmdMessageRespBody : GPBMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) q nextCmdIndex;
@property (nonatomic) BOOL hasNextCmdIndex;
@property (nonatomic) q nextUserMessageCursor;
@property (nonatomic) BOOL hasNextUserMessageCursor;
+ (id)descriptor;
@end
