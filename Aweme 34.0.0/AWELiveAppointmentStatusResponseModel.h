@interface AWELiveAppointmentStatusResponseModel : AWEBaseApiModel
@property (nonatomic) AWELiveAppointmentStatusModel appointmentStatus;
- (id)appointmentStatus;
- (void)setAppointmentStatus:;
- (void).cxx_destruct;
+ (id)appointmentStatusJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
@end
