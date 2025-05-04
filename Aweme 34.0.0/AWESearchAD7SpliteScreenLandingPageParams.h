@interface AWESearchAD7SpliteScreenLandingPageParams : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWEAwemePlayInteractionPanelControllerProtocol> panelInteraction;
@property (nonatomic) <AWEPlayInteractionPanelManagerProtocol> panelManager;
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) <AWEPlayInteractionViewControllerProtocol> interactionController;
@property (nonatomic) <AWEAwemeNewDetailTableContainerProtocol> container;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (id)panelManager;
- (id)panelInteraction;
- (void)setPanelInteraction:;
- (void)setPanelManager:;
- (void)setContainer:;
- (id)container;
- (void)setInteractionController:;
- (void).cxx_destruct;
- (id)interactionController;
@end
