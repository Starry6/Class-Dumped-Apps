@interface HTSLiveLinkerUpdateWaitingUserOffsetContent : IESLivePBBaseMessage
@property (nonatomic) q offset;
@property (nonatomic) NSInteger sortStrategy;
@property (nonatomic) q totalCount;
+ (id)descriptor;
@end
