@interface IESECPDPBaseComponent : NSObject
@property (nonatomic) IESECommerceServiceProvider serviceProvider;
- (void)animateDismiss;
- (void)beganGesture:;
- (void)cancelFullModePan;
- (void)cancelHalfModePan;
- (void)containerDidRender;
- (void)containerWillLoad;
- (void)endOrCancelGesture:;
- (void)handlePanGestureWithPercent:;
- (void)loadComponent;
- (void)packApiBack;
- (void)panWithOffsetY:directionUp:;
- (void)registerSelfService;
- (void)showPresentAnimation;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)initWithServiceProvider:;
@end
