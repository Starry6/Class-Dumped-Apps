@interface AWEIMMessageFloatNewContainerParams : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWEAwemePlayInteractionPanelControllerProtocol> panelInteraction;
@property (nonatomic) <AWEPlayInteractionContextProtocol> playInteractionContext;
@property (nonatomic) <AWEPlayInteractionViewControllerProtocol> interactionController;
@property (nonatomic) <AWEAwemeNewDetailTableContainerProtocol> container;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) double heightRatio;
@property (nonatomic) double keyboardShowHeightRatio;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)trackParams;
- (void)setTrackParams:;
- (id)playInteractionContext;
- (void)setPlayInteractionContext:;
- (id)panelInteraction;
- (void)setHeightRatio:;
- (double)keyboardShowHeightRatio;
- (void)setKeyboardShowHeightRatio:;
- (void)setPanelInteraction:;
- (void)setContainer:;
- (id)container;
- (void)setInteractionController:;
- (void).cxx_destruct;
- (id)interactionController;
- (double)heightRatio;
@end
