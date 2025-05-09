@interface CBAurora : NSObject
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isBoostingBrightness;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL displayIsOn;
@property (nonatomic) BOOL aodIsOn;
@property (nonatomic) BOOL autoBrightnessIsEnabled;
@property (nonatomic) BOOL lowPowerModeIsEnabled;
@property (nonatomic) BOOL rampInProgress;
@property (nonatomic) float currentNits;
@property (nonatomic) float currentPreAuroraNits;
@property (nonatomic) float currentScaler;
@property (nonatomic) float currentEDRHeadroom;
@property (nonatomic) float currentEDRHeadroomRequest;
@property (nonatomic) float cltmCap;
@property (nonatomic) float upoCap;
@property (nonatomic) float lux;
- (void)dealloc;
- (void)exit;
- (void)startMonitoring;
- (void)enter;
- (void)stopMonitoring;
- (void)setIsEnabled:;
- (BOOL)isActive;
- (BOOL)isEnabled;
- (float)lux;
- (float)currentEDRHeadroom;
- (void)setLux:;
- (void)sendEDRHeadroomRequest:;
- (void)initializeMembers;
- (id)initWithQueue:andDisplay:andDisplayModule:;
- (BOOL)entryConditionsSatisfied;
- (void)evaluateEntryConditions;
- (BOOL)isBoostingBrightness;
- (void)rampTo:;
- (BOOL)energyConsumptionExceeded;
- (float)calculateEnergyConsumptionCap;
- (void)processAPCESample;
- (void)restoreEDRHeadroom;
- (void)setCurrentScaler:;
- (void)setCurrentEDRHeadroomRequest:;
- (void)setDisplayIsOn:;
- (void)setAODIsOn:;
- (void)setAutoBrightnessIsEnabled:;
- (void)setLowPowerModeIsEnabled:;
- (void)setCLTMCap:;
- (void)setUPOCap:;
- (void)setCPMSActivationThreshold:;
- (void)setRampTimeSecondsPerStop:;
- (float)currentPreAuroraNits;
- (float)calculateNumberOfStopsForCurrentScaler:andRequestedScaler:;
- (float)calculateRampTimeForCurrentScaler:andRequestedScaler:;
- (float)clampScaler:;
- (float)calculateLuxTargetScaler:;
- (float)calculateCurrentLuxTargetScaler;
- (float)calculateRampTargetScalerForNits:;
- (float)calculateRampTargetForNits:andAPCE:withTapPointAPCEMinimum:andTapPointAPCEMaximum:;
- (float)calculateRampUpTargetForNits:andAPCE:;
- (float)calculateCurrentRampUpTargetForAPCE:;
- (float)calculateRampDownTargetForNits:andAPCE:;
- (float)calculateCurrentRampDownTargetForAPCE:;
- (float)convertScalerToNits:;
- (void)setPropertyForKey:withValue:;
- (BOOL)displayIsOn;
- (BOOL)aodIsOn;
- (BOOL)autoBrightnessIsEnabled;
- (BOOL)lowPowerModeIsEnabled;
- (BOOL)rampInProgress;
- (void)setRampInProgress:;
- (float)currentNits;
- (void)setCurrentNits:;
- (float)currentScaler;
- (void)setCurrentEDRHeadroom:;
- (float)currentEDRHeadroomRequest;
- (float)cltmCap;
- (float)upoCap;
@end
