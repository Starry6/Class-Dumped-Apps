@interface AWEPlayInteractionLiveAppointmentGuideViewModel : NSObject
@property (nonatomic) AWEAwemeModel model;
- (id)p_liveModuleService;
- (void)appointmentWithCompletion:;
- (void)appointmentCountWithCompletion:;
- (void)appointmentNextWithCompletion:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
@end
