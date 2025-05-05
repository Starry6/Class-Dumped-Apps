@interface VCRedundancyControlAlgorithmAudio : NSObject
@property (nonatomic) I redundancyPercentage;
@property (nonatomic) double redundancyInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)updateRedundancyStrategyWithNetworkStatistics:;
- (unsigned int)redundancyPercentage;
- (double)redundancyInterval;
- (void)processNWConnectionStatistics:;
- (void)processRCNetworkStatistics:;
- (void)computeRedundancyInfo;
- (unsigned int)updateRedundancyPercentageWithPLRThresholds:;
@end
