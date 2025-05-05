@interface TimeLimitPkInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray pkUserInfoArray;
@property (nonatomic) Q pkUserInfoArray_Count;
@property (nonatomic) q rlTime;
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) NSInteger status;
@property (nonatomic) q round;
+ (id)descriptor;
@end
