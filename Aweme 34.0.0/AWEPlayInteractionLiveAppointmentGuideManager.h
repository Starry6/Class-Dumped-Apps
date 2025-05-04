@interface AWEPlayInteractionLiveAppointmentGuideManager : NSObject
@property (nonatomic) NSMutableSet anchorIDSet;
@property (nonatomic) NSMutableSet appointmentIDSet;
- (BOOL)checkLiveAppointmentStatusWithAnchorID:;
- (BOOL)checkLiveAppointmentStatusWithAppointmentID:;
- (void)registerAppointmentWithAppointmentID:;
- (void)registerAppointmentWithAnchorID:;
- (id)anchorIDSet;
- (id)appointmentIDSet;
- (void)setAnchorIDSet:;
- (void)setAppointmentIDSet:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
