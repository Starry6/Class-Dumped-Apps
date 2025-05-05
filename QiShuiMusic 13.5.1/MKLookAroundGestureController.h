@interface MKLookAroundGestureController : NSObject
@property (nonatomic) MKLookAroundView lookAroundView;
@property (nonatomic) <MKLookAroundGestureControllerDelegate> delegate;
@property (nonatomic) BOOL navigatingEnabled;
@property (nonatomic) BOOL panningEnabled;
@property (nonatomic) BOOL zoomingEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_handlePan:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setDelegate:;
- (id)lookAroundView;
- (void)setLookAroundView:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)setNavigatingEnabled:;
- (void)setPanningEnabled:;
- (void)setZoomingEnabled:;
- (BOOL)navigatingEnabled;
- (BOOL)panningEnabled;
- (BOOL)zoomingEnabled;
- (void)_handleSingleNavigate:;
- (void)_handleZoom:;
- (id)initWithLookAroundView:;
- (void)_moveBackToReplayTap;
@end
