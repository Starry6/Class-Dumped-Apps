@interface ChatReplyListResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray messagesArray;
@property (nonatomic) Q messagesArray_Count;
@property (nonatomic) q topMsgId;
@property (nonatomic) q bottomMsgId;
@property (nonatomic) BOOL upHasMore;
@property (nonatomic) BOOL downHasMore;
+ (id)descriptor;
@end
