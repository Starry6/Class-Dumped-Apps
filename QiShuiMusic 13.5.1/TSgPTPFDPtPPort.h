@interface TSgPTPFDPtPPort : TSgPTPNetworkPort
@property (nonatomic) TSgPTPPortStatistics statistics;
@property (nonatomic) c localPDelayLogMeanInterval;
@property (nonatomic) c remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;
- (void).cxx_destruct;
- (void)setStatistics:;
- (id)statistics;
- (char)localPDelayLogMeanInterval;
- (char)remotePDelayLogMeanInterval;
- (BOOL)multipleRemotes;
- (BOOL)measuringPDelay;
- (id)initWithImplXPC:;
- (void)updateWithXPCStatistics:;
+ (id)diagnosticDescriptionForInfo:withIndent:;
+ (id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingMultipleRemotes;
+ (id)keyPathsForValuesAffectingMeasuringPDelay;
@end
