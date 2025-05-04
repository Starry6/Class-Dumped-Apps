@interface AWEPlayInteractionAdPortalElement : AWEPlayInteractionLeftElement
- (void)didFinishFollowUser:status:error:;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)handleAppointmentResultWithAdModel:sceneType:appointmentStatus:error:;
- (void)liveDidEnd:;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)performTeleportEvent:;
- (void)teleport;
- (id)getPortalViewFrameInView:;
- (void)dynamicWidthRemakeLayout;
- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
+ (void)preloadResourcesWithModel:;
+ (id)activateInfoWithContext:;
@end
