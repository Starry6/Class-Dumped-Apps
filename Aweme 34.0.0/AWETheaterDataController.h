@interface AWETheaterDataController : AWEBaseDataController
@property (nonatomic) AWETheaterRequestModel requestModel;
@property (nonatomic) AWETheaterPageContext context;
- (void)setRequestModel:;
- (void)requestWithCompletion:;
- (void)refreshHistoryWithCompletion:;
- (id)requestModel;
- (void)setContext:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)context;
+ (void)addTheaterEntranceWithIsNewVersion:completion:;
+ (void)updateLongVideoAppointmentStatus:appointmentID:appointmentType:completion:;
@end
