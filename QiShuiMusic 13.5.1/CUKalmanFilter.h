@interface CUKalmanFilter : NSObject
@property (nonatomic) double stateX;
@property (nonatomic) double stateU;
- (double)updateWithValue:;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (double)updateWithValue:control:;
- (double)stateX;
- (double)stateU;
@end
