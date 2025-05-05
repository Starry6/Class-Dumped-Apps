@interface QLPHSwipeDownTracker : NSObject
@property (nonatomic) QLPXSwipeDownTracker impl;
@property (nonatomic) double dismissalProgress;
@property (nonatomic) BOOL shouldFinishDismissal;
@property (nonatomic) {CGPoint=dd} trackedCenter;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} trackedBounds;
@property (nonatomic) {CGAffineTransform=dddddd} trackedTransform;
@property (nonatomic) {QLPHDisplayVelocity=dddd} trackedVelocity;
@property (nonatomic) double finalAnimationDuration;
@property (nonatomic) double finalAnimationSpringDamping;
- (id)init;
- (void).cxx_destruct;
- (id)impl;
- (void)trackGestureTranslation:velocity:;
- (double)dismissalProgress;
- (BOOL)shouldFinishDismissal;
- (id)trackedCenter;
- (id)trackedBounds;
- (id)trackedTransform;
- (id)trackedVelocity;
- (double)finalAnimationDuration;
- (double)finalAnimationSpringDamping;
- (void)startTrackingCenter:bounds:transform:withInitialGestureLocation:;
@end
