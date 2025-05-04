@interface AWEHPTouchMonitorModel : NSObject
@property (nonatomic) UITouch touch;
@property (nonatomic) BOOL isSlideTouch;
@property (nonatomic) {CGPoint=dd} beganLocation;
@property (nonatomic) double beganTimestamp;
@property (nonatomic) NSMapTable gesturesShouldBeginResults;
@property (nonatomic) NSMutableDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)gesturesShouldBeginResults;
- (void)updateTrackParamsWhenFirstMoved;
- (BOOL)isSlideTouch;
- (void)setIsSlideTouch:;
- (id)beganLocation;
- (void)setBeganLocation:;
- (void)setGesturesShouldBeginResults:;
- (id)touch;
- (void)setTouch:;
- (void).cxx_destruct;
- (double)beganTimestamp;
- (void)setBeganTimestamp:;
@end
