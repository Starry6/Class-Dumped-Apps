@interface KickListResponse_ResponseExtra : IESLivePBBaseMessage
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q maxCount;
@property (nonatomic) NSMutableArray listArray;
@property (nonatomic) Q listArray_Count;
@property (nonatomic) q total;
+ (id)descriptor;
@end
