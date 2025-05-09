@interface AVZoomingBehaviorContext : NSObject
@property (nonatomic) AVZoomingBehavior behavior;
@property (nonatomic) AVPlaybackContentZoomingView contentZoomingView;
@property (nonatomic) AVObservationController observationController;
@property (nonatomic) UITapGestureRecognizer doubleTapGestureRecognizer;
@property (nonatomic) AVPlaybackContentContainerView activeContentView;
@property (nonatomic) BOOL zoomingEnabled;
@property (nonatomic) {CGSize=dd} contentAspectRatio;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AVPlayerViewController playerViewController;
- (id)playerViewController;
- (id)doubleTapGestureRecognizer;
- (void)dealloc;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)_handleDoubleTapGestureRecognizer:;
- (id)observationController;
- (void)setBehavior:;
- (void)setObservationController:;
- (id)activeContentView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (id)behavior;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)viewDidLoad;
- (void)setZoomingEnabled:;
- (void)setDoubleTapGestureRecognizer:;
- (id)initWithAVKitOwner:;
- (void)willAddBehavior:;
- (void)didAddBehavior:;
- (void)willRemoveBehavior:;
- (void)didRemoveBehavior:;
- (id)makePlaybackContentContainerWithFrame:activeContentView:;
- (BOOL)isZoomingEnabled;
- (void)setContentAspectRatio:;
- (id)contentAspectRatio;
- (void)_updateZoomingView;
- (id)contentZoomingView;
- (void)setContentZoomingView:;
@end
