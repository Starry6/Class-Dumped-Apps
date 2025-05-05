@interface IESLivePaidLinkmicOptionalStep : IESLivePBBaseMessage
@property (nonatomic) q leftClosedInterval;
@property (nonatomic) q rightClosedInterval;
@property (nonatomic) q step;
+ (id)descriptor;
@end
