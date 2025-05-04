@interface AWEECFeedVideoResizeManager : NSObject
@property (nonatomic) <AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (nonatomic) <AWEAwemePlayInteractionPlayDelegate> interactionController;
- (id)initWithPanelController:interactionController:;
- (void)changeVideoWhenShowGoodsPanel:;
- (void)goodsPanelMoveProgress:;
- (id)panelControllerForResizeVideo;
- (BOOL)canShrink;
- (BOOL)albumSupportShrink;
- (void)dealloc;
- (void)setPanelController:;
- (void)setInteractionController:;
- (void).cxx_destruct;
- (id)panelController;
- (id)interactionController;
@end
