@interface MovementStateEstimator : NSObject
@property (nonatomic) q state;
- (void)dealloc;
- (id)initWithOptions:;
- (long long)state;
- (void).cxx_destruct;
- (float)averageSpeed;
- (long long)processMeasurementWithPosition:referenceLength:atTime:;
- (long long)_estimateNewStateForMeasurement:oldState:atTime:;
@end
