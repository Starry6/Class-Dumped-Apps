@interface VCSwitchManager : NSObject
@property (nonatomic) I localSwitches;
@property (nonatomic) I remoteSwitches;
@property (nonatomic) I negotiatedSwitches;
- (id)description;
- (void)initializeLocalSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalABTestSwitches;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalVideoTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)updateDuplicationEnhancementSwitches;
- (void)negotiateSwitches;
- (void)negotiateSwitchesForIsCaller:;
- (void)setRemoteSwitches:isCaller:;
- (BOOL)isSwitchEnabled:;
- (BOOL)isLocalSwitchEnabled:;
- (unsigned int)applyNegotiationRulesUsingLocalSwitches:negotiatedSwitches:;
- (unsigned int)localSwitches;
- (void)setLocalSwitches:;
- (unsigned int)remoteSwitches;
- (void)setRemoteSwitches:;
- (unsigned int)negotiatedSwitches;
- (void)setNegotiatedSwitches:;
@end
