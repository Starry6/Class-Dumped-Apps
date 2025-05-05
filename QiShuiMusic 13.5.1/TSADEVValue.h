@interface TSADEVValue : NSObject
@property (nonatomic) double observationInterval;
@property (nonatomic) double adev;
- (id)description;
- (double)observationInterval;
- (double)adev;
- (id)initWithObservationInterval:andADEV:;
@end
