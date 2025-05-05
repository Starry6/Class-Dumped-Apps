@interface CLReductiveFilterOptions : NSObject
@property (nonatomic) double biasRateInMeasurement;
@property (nonatomic) double applyRangeEstimation;
@property (nonatomic) Q beaconType;
@property (nonatomic) double transmitPower;
- (id)init;
- (id)initWithBeaconType:;
- (id)initWithBeaconType:transmitPower:;
- (unsigned long long)beaconType;
- (double)transmitPower;
- (double)biasRateInMeasurement;
- (void)setBiasRateInMeasurement:;
- (double)applyRangeEstimation;
- (void)setApplyRangeEstimation:;
@end
