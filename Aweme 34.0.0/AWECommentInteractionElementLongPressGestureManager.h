@interface AWECommentInteractionElementLongPressGestureManager : NSObject
@property (nonatomic) @? touchBegin;
@property (nonatomic) @? gestureBegin;
@property (nonatomic) @? gestureChanged;
@property (nonatomic) @? gestureEnded;
@property (nonatomic) @? gestureFailed;
@property (nonatomic) @? gestureDeault;
- (void)handleLongPressWithGes:;
- (id)touchBegin;
- (void)setTouchBegin:;
- (id)gestureBegin;
- (void)setGestureBegin:;
- (id)gestureChanged;
- (void)setGestureChanged:;
- (id)gestureEnded;
- (void)setGestureEnded:;
- (id)gestureFailed;
- (void)setGestureFailed:;
- (id)gestureDeault;
- (void)setGestureDeault:;
- (void)addLongPressGesture:animationView:gesDelegate:;
- (void)removeGesture;
- (void)recoverAnimationView:;
- (id)init;
- (void).cxx_destruct;
@end
