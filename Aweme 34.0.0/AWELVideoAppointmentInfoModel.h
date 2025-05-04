@interface AWELVideoAppointmentInfoModel : MTLModel
@property (nonatomic) NSString appointmentID;
@property (nonatomic) BOOL isAppointment;
@property (nonatomic) q appointmentType;
@property (nonatomic) NSNumber beginTime;
@property (nonatomic) NSNumber appointmentCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)appointmentType;
- (void)setAppointmentType:;
- (id)appointmentCount;
- (void)setAppointmentCount:;
- (id)appointmentID;
- (void)setIsAppointment:;
- (void)setAppointmentID:;
- (id)beginTime;
- (void)setBeginTime:;
- (void).cxx_destruct;
- (BOOL)isAppointment;
+ (id)JSONKeyPathsByPropertyKey;
@end
