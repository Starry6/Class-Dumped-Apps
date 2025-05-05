@interface TSTDEVValue : NSObject
@property (nonatomic) double observationInterval;
@property (nonatomic) double tdev;
- (id)description;
- (double)observationInterval;
- (double)tdev;
- (id)initWithObservationInterval:andTDEV:;
@end
