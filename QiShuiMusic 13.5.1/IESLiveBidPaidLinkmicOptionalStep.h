@interface IESLiveBidPaidLinkmicOptionalStep : IESLivePBBaseMessage
@property (nonatomic) q bidLeftClosedInterval;
@property (nonatomic) q bidRightClosedInterval;
@property (nonatomic) q bidStep;
+ (id)descriptor;
@end
