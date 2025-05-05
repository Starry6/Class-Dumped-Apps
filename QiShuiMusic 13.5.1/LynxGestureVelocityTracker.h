@interface LynxGestureVelocityTracker : NSObject
@property (nonatomic) UIPanGestureRecognizer tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRootView:;
- (void)update:;
- (void)dealloc;
- (id)tracker;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)velocityInView:;
- (void).cxx_destruct;
@end
