@interface HTSLiveAppointmentData : IESLivePBBaseMessage
@property (nonatomic) q appointmentId;
@property (nonatomic) BOOL isSubscribe;
+ (id)descriptor;
@end
