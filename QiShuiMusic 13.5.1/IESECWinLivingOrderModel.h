@interface IESECWinLivingOrderModel : MTLModel
@property (nonatomic) NSString appointmentText;
@property (nonatomic) NSString appointmentId;
@property (nonatomic) NSString appointmentSchema;
@property (nonatomic) Q appointmentStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appointmentText;
- (id)appointmentId;
- (id)appointmentSchema;
- (unsigned long long)appointmentStatus;
- (void)setAppointmentId:;
- (void)setAppointmentSchema:;
- (void)setAppointmentStatus:;
- (void)setAppointmentText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
