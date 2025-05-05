@interface VCRedundancyControlAlgorithmVideoIpadCompanion : NSObject
@property (nonatomic) I redundancyPercentage;
@property (nonatomic) double redundancyInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateRedundancyStrategyWithNetworkStatistics:;
- (unsigned int)redundancyPercentage;
- (double)redundancyInterval;
- (void)updateBurstyLoss:;
- (unsigned int)computeRedundancyWithLossPercentage;
- (unsigned int)computeRedundancyWithBurstyLoss;
@end
