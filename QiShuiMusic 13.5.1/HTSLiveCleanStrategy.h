@interface HTSLiveCleanStrategy : IESLivePBBaseMessage
@property (nonatomic) NSInteger cleanType;
@property (nonatomic) NSString assetPoolType;
@property (nonatomic) q keepAliveTime;
+ (id)descriptor;
@end
