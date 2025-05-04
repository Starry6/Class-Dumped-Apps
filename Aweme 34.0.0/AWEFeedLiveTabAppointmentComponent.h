@interface AWEFeedLiveTabAppointmentComponent : AWEFeedLiveTabBaseComponent
@property (nonatomic) _TtC16AWELiveSwiftImpl29AWEFeedLiveTabAppointmentView appointmentView;
@property (nonatomic) AppointmentData appointmentData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appointmentData;
- (void)setAppointmentData:;
- (void)feedLiveTabDidEnter:;
- (void)setupAppointmentView;
- (void)setAppointmentView:;
- (void)insertSubComponentWithData:atIndex:;
- (void)trackModuleShow;
- (void)handleFollowUpVisitData:;
- (void)updateComponentWith:;
- (id)appointmentView;
- (id)itemsWithVisitData:;
- (id)appointmentItemWithVisitData:;
- (void)bindService;
- (id)init;
- (void).cxx_destruct;
- (void)becomeInactive;
@end
