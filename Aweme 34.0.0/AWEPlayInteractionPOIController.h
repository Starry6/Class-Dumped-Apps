@interface AWEPlayInteractionPOIController : AWEPlayInteractionBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPadSplitOpening;
- (id)aAWEPadSplitScreenAdapter;
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
- (void)triggerShowForCard:shouldShow:;
- (void)viewDidLoad;
+ (Class)aAWEPadSplitScreenAdapterClass;
@end
