@interface CLEmergencyLocationUsabilityCriteria : NSObject
@property (nonatomic) BOOL vuncCheckRequiredForUsability;
@property (nonatomic) BOOL altitudeStitchingEnabled;
@property (nonatomic) double maxUsableAge;
@property (nonatomic) double maxUsableHunc;
@property (nonatomic) double maxUsableVunc;
@property (nonatomic) I minUsableIntegrity;
- (id)init;
- (void)printUsabilityCriteria:;
- (BOOL)vuncCheckRequiredForUsability;
- (void)setVuncCheckRequiredForUsability:;
- (BOOL)altitudeStitchingEnabled;
- (void)setAltitudeStitchingEnabled:;
- (double)maxUsableAge;
- (void)setMaxUsableAge:;
- (double)maxUsableHunc;
- (void)setMaxUsableHunc:;
- (double)maxUsableVunc;
- (void)setMaxUsableVunc:;
- (unsigned int)minUsableIntegrity;
- (void)setMinUsableIntegrity:;
@end
