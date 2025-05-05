@interface IESSaaSTIMPBNGetStrangerConversationListResponseBody : GPBMessage
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) NSInteger totalUnread;
@property (nonatomic) BOOL hasTotalUnread;
@property (nonatomic) NSMutableArray conversationListArray;
@property (nonatomic) Q conversationListArray_Count;
+ (id)descriptor;
@end
