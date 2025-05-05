@interface HTSLiveSearchLoadMoreData : IESLivePBBaseMessage
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
@property (nonatomic) q offset;
@property (nonatomic) q total;
+ (id)descriptor;
@end
