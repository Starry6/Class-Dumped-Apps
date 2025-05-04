@interface AWESpecialCardTemplateInteractionViewController : AWEPlayInteractionViewController
@property (nonatomic) UIViewController<AWESpecialCardPanelProtocol> panelController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (void)setPureMode:animateDuration:;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)addChildVC;
- (void)removeChildVC;
- (BOOL)loadElementContainerByProvider;
- (void)setModel:;
- (void)setPanelController:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)panelController;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)pageDidDisappear:;
- (void)pageWillAppear:;
- (void)pageWillDisappear:;
@end
