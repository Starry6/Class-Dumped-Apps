@interface AWELiveSubscribeStatusResponseModel : AWEBaseApiModel
@property (nonatomic) AWELiveSubscribeStatusModel appointmentStatus;
- (id)appointmentStatus;
- (void)setAppointmentStatus:;
- (void).cxx_destruct;
+ (id)appointmentStatusJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
@end
