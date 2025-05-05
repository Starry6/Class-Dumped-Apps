@interface IESLiveMusicInterval : IESLivePBBaseMessage
@property (nonatomic) q startTimeMillisecond;
@property (nonatomic) q durationMillisecond;
+ (id)descriptor;
@end
