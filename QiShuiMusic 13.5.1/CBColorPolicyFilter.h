@interface CBColorPolicyFilter : CBFilter
@property (nonatomic) BOOL isColorMitigationTriggered;
@property (nonatomic) float filteredStrength;
@property (nonatomic) CBHIDEvent filteredALS;
- (id)handleALSEvent:;
- (void)dealloc;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (void)resetFilter;
- (id)initWithID:;
- (id)filterEvent:;
- (void)setModuleObject:;
- (void)initializeMitigationsForDevice:;
- (BOOL)shouldMitigateForSample:withLuxThr:NitsThr:andSize:;
- (BOOL)sampleIsFromCERegion:;
- (BOOL)sampleIsFromMitigatedRegion:;
- (float)computeBaselineStrengthForLux:andNits:;
- (float)interpolateBetweenX1:Y1:X2:Y2:X:;
- (float)biLinearInterpBetweenIndices:forPoint1:andPoint2:;
- (BOOL)isColorMitigationTriggered;
- (void)setIsColorMitigationTriggered:;
- (float)filteredStrength;
- (void)setFilteredStrength:;
- (id)filteredALS;
@end
