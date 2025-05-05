@interface HTSLiveIntroduceDispatchStrategy : IESLivePBBaseMessage
@property (nonatomic) NSInteger strategyType;
@property (nonatomic) NSInteger maxRetryTimes;
@property (nonatomic) NSInteger minRandomMs;
@property (nonatomic) NSInteger maxRandomMs;
+ (id)descriptor;
@end
