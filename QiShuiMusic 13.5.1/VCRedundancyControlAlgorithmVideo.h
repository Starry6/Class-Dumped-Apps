@interface VCRedundancyControlAlgorithmVideo : NSObject
@property (nonatomic) BOOL isRedundancyStrategyResetPending;
@property (nonatomic) I redundancyPercentage;
@property (nonatomic) double redundancyInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)reset;
- (void)updateRedundancyStrategyWithNetworkStatistics:;
- (unsigned int)redundancyPercentage;
- (double)redundancyInterval;
- (id)getFecLevelPerFrameSizeVector;
- (id)initWithRedundancyControllerMode:maxAllowedRedundancyPercentage:mediaControlInfoFECFeedbackVersion:;
- (id)setupFeedbackAnalyzerConfig;
- (void)stateRunning:;
- (void)stateFrozen:;
- (void)checkForRedundancyFreeze:;
- (void)processNWConnectionStatistics:;
- (void)processRCNetworkStatistics:;
- (void)updateBurstyLoss:;
- (unsigned int)computeRedundancyWithLossPercentage;
- (unsigned int)computeRedundancyWithBurstyLoss;
- (BOOL)isRedundancyStrategyResetPending;
- (void)setIsRedundancyStrategyResetPending:;
@end
