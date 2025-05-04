@interface AWELandscapeVolumeBrightnessController : AWELandscapeInteractionBaseController
@property (nonatomic) AWELandscapeVolumeBrightnessControlView volumeBrightnessView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)interactionViewState;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (BOOL)shouldReceiveGestureRecognizer:touch:;
- (void)willExitLandscape;
- (id)volumeBrightnessView;
- (void)setVolumeBrightnessView:;
- (void)updateState:;
- (BOOL)isInteractive;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isInteracting;
@end
