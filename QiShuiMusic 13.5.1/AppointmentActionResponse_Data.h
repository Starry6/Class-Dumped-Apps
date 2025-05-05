@interface AppointmentActionResponse_Data : IESLivePBBaseMessage
@property (nonatomic) NSInteger code;
@property (nonatomic) NSString message;
@property (nonatomic) q appointmentId;
+ (id)descriptor;
@end
