@interface SilenceListResponse_ResponseExtra : IESLivePBBaseMessage
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextCursor;
@property (nonatomic) q total;
@property (nonatomic) q maxCount;
@property (nonatomic) NSMutableArray datasArray;
@property (nonatomic) Q datasArray_Count;
+ (id)descriptor;
@end
