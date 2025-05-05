@interface MovementStateEstimatorOptions : NSObject
@property (nonatomic) Q velocityAverageWindowSize;
@property (nonatomic) float movingToStationaryTransitionThresholdSpeed;
@property (nonatomic) float movingToStationaryTransitionThresholdWaitSec;
- (id)init;
- (unsigned long long)velocityAverageWindowSize;
- (void)setVelocityAverageWindowSize:;
- (float)movingToStationaryTransitionThresholdSpeed;
- (void)setMovingToStationaryTransitionThresholdSpeed:;
- (float)movingToStationaryTransitionThresholdWaitSec;
- (void)setMovingToStationaryTransitionThresholdWaitSec:;
@end
