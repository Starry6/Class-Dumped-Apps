@interface AVScrubbingGesturePlatformAdapter_iOS : AVScrubbingGesturePlatformAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (BOOL)gestureEnabled;
- (float)timelineVelocity;
- (void)setGestureEnabled:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)_panGestureAction:;
- (void)_touchGestureAction:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureActive;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
@end
