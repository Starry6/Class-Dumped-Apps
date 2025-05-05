@interface QLSwipeDownTracker : QLPHSwipeDownTracker
@property (nonatomic) {CGPoint=dd} anchorPoint;
@property (nonatomic) {CGPoint=dd} trackedCenter;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} trackedBounds;
@property (nonatomic) {CGAffineTransform=dddddd} trackedTransform;
@property (nonatomic) {_QLDismissGestureTrackingVelocity=dddd} trackedVelocity;
@property (nonatomic) double finalAnimationDuration;
@property (nonatomic) double finalAnimationSpringDamping;
@property (nonatomic) double dismissalProgress;
@property (nonatomic) BOOL shouldFinishDismissal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorPoint;
- (id)trackedTransform;
- (void)startTrackingCenter:bounds:transform:withInitialGestureLocation:;
@end
