@interface AWESearchAIGCInputViewInterceptionView : UIView
@property (nonatomic) @? interceptionDetected;
@property (nonatomic) UIPanGestureRecognizer interceptionPanGesture;
@property (nonatomic) UITapGestureRecognizer interceptionTapGesture;
@property (nonatomic) BOOL hasTriggeredDetect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)panDetected;
- (void)tapDetected;
- (id)interceptionDetected;
- (void)setInterceptionDetected:;
- (id)interceptionPanGesture;
- (void)setInterceptionPanGesture:;
- (id)interceptionTapGesture;
- (void)setInterceptionTapGesture:;
- (BOOL)hasTriggeredDetect;
- (void)setHasTriggeredDetect:;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)reset;
@end
