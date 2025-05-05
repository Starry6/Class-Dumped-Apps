@interface ScheduledLive : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray listArray;
@property (nonatomic) Q listArray_Count;
+ (id)descriptor;
@end
