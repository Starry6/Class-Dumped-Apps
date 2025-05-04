@interface AWEDPlayerVolumeController : AWEDPlayerInteractionBaseController
@property (nonatomic) AWEDPlayerVolumeView volumeView;
@property (nonatomic) Q interactionViewState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didChangePlaybackStateWithAction:;
- (unsigned long long)activateType;
- (unsigned long long)interactionViewState;
- (void)setVolumeView:;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (BOOL)shouldReceiveGestureRecognizer:touch:;
- (void)updateDPlayerState:;
- (void)setInteractionViewState:;
- (void)changeInteractionViewToState:;
- (BOOL)isInteractive;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidAppear;
- (BOOL)isInteracting;
- (void)viewWillDisappear;
- (id)volumeView;
@end
