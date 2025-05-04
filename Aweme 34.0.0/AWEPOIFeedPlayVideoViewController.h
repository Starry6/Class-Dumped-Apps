@interface AWEPOIFeedPlayVideoViewController : AWEPlayVideoExtraAbilityViewController
@property (nonatomic) BOOL forceImageSliderPlayingWhenTransition;
@property (nonatomic) UIView<AFDSlidesViewProtocol> imageSliderView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didChangePlaybackStateWithAction:;
- (BOOL)awe_play;
- (id)modernTransitionContext;
- (id)imageSliderView;
- (void)setImageSliderView:;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:;
- (void)resetImageSliderView;
- (BOOL)enableAFDSlidesView;
- (void)setForceImageSliderPlayingWhenTransition:;
- (void)imageSliderPlayIfNeed;
- (BOOL)forceImageSliderPlayingWhenTransition;
- (void)setModel:;
- (BOOL)play;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)stop;
- (BOOL)pause;
@end
