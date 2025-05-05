@interface ScheduleItem : IESLivePBBaseMessage
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
