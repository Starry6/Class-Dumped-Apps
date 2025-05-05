@interface HTSLiveMyLiveTab_Extra : IESLivePBBaseMessage
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextQueryIndex;
@property (nonatomic) q cost;
+ (id)descriptor;
@end
