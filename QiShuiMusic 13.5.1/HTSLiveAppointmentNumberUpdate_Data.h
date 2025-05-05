@interface HTSLiveAppointmentNumberUpdate_Data : IESLivePBBaseMessage
@property (nonatomic) q currentNumber;
@property (nonatomic) NSString anchorOpenId;
+ (id)descriptor;
@end
