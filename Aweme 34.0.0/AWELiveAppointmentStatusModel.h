@interface AWELiveAppointmentStatusModel : MTLModel
@property (nonatomic) AWELiveAppointmentModel appointmentDetail;
@property (nonatomic) BOOL hasSubscribe;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasSubscribe;
- (id)appointmentDetail;
- (void)setAppointmentDetail:;
- (void)setHasSubscribe:;
- (void).cxx_destruct;
+ (id)appointmentDetailJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;
@end
