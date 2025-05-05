@interface PLQuickEnergySnapshot : NSObject
@property (nonatomic) NSDate timestamp;
@property (nonatomic) double cpuEnergy;
@property (nonatomic) double networkEnergy;
- (double)cpuEnergy;
- (id)initWithEnergies:andNetworkEnergy:;
- (void)setTimestamp:;
- (double)getTotalEnergy;
- (void).cxx_destruct;
- (id)timestamp;
- (void)setCpuEnergy:;
- (double)networkEnergy;
- (id)description;
- (void)setNetworkEnergy:;
- (double)computeEnergyDiff:;
@end
