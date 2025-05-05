@interface IESECPDPLiveBannerComponent : IESECPDPBaseComponent
@property (nonatomic) <IESECPDPContainerService> container;
@property (nonatomic) <IESECPDPSectionManagerService> sectionManager;
@property (nonatomic) <IESECPDPActionDispatcherService> dispatcher;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} panStartFrame;
@property (nonatomic) IESECGoodsDetailLiveBanner liveBanner;
- (void)animateDismiss;
- (void)beganGesture:;
- (void)cancelFullModePan;
- (void)cancelHalfModePan;
- (void)containerDidRender;
- (void)handlePanGestureWithPercent:;
- (id)liveBanner;
- (void)loadComponent;
- (id)panStartFrame;
- (void)panWithOffsetY:directionUp:;
- (void)registerSelfService;
- (id)sectionManager;
- (void)setLiveBanner:;
- (void)setPanStartFrame:;
- (void)setSectionManager:;
- (void)setupLiveBannerForMode:;
- (void)showPresentAnimation;
- (void)setDispatcher:;
- (id)dispatcher;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
