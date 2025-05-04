@interface AWEPlayInteractionLiveAppointmentGuideContainerView : UIView
@property (nonatomic) AWEPlayInteractionLiveAppointmentGuideView appointmentView;
@property (nonatomic) <AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupWithModel:;
- (void)setAppointmentView:;
- (id)appointmentView;
- (void)updateWithModel:isClick:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
