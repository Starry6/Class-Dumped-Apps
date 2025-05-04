@interface AWEPOIPlayInteractionVCManagerProtocolAdapter : NSObject
@property (nonatomic) <AWEPOIPlayInteractionVCManagerProtocol> interactionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPadSplitOpening;
- (void)tryHidePauseIcon;
- (void)tryShowPauseIcon;
- (id)getCurrentVideoPlayer;
- (id)getRichContentContainer;
- (void)hideInteractionControllerWithAnimation:;
- (void)resumeInteractionControllerWithAnimation:;
- (void)switchPlayStateWithAnimation:;
- (void)playWithAnimation:;
- (void)pauseWithAnimation:;
- (void)changeVideoShrinkStatus:;
- (id)albumShrinkController;
- (id)albumShrinkExpandTextController;
- (void)setInteractionManager:;
- (id)initWithInteractionManager:;
- (void).cxx_destruct;
- (id)interactionManager;
@end
