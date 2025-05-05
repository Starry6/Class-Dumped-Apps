@interface IESSaaSTIMPBNMessagesPerUserInitResponseBody : GPBMessage
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
+ (id)descriptor;
@end
