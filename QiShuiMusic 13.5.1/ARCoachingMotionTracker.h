@interface ARCoachingMotionTracker : NSObject
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL didStartMoving;
@property (nonatomic) BOOL didStopMoving;
- (BOOL)isMoving;
- (id)init;
- (void)clear;
- (void)setIsMoving:;
- (BOOL)didStopMoving;
- (void)updateWithFrame:;
- (BOOL)didStartMoving;
- (id)calcAverageVelocity;
@end
