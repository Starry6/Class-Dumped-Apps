@interface AVScrubbingGesturePlatformAdapter : NSObject
@property (nonatomic) <AVScrubbingGesturePlatformAdapterDelegate> delegate;
@property (nonatomic) BOOL gestureEnabled;
@property (nonatomic) float timelineVelocity;
@property (nonatomic) BOOL gestureActive;
- (BOOL)gestureEnabled;
- (float)timelineVelocity;
- (void)setGestureEnabled:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)gestureActive;
- (id)_abstractInit;
@end
