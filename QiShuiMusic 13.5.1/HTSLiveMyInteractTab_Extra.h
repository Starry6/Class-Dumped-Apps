@interface HTSLiveMyInteractTab_Extra : IESLivePBBaseMessage
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextQueryIndex;
@property (nonatomic) q cost;
@property (nonatomic) q status;
+ (id)descriptor;
@end
