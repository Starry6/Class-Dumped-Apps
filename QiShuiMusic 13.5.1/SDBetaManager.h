@interface SDBetaManager : NSObject
@property (nonatomic) NSArray cachedPrograms;
@property (nonatomic) NSDate lastCached;
@property (nonatomic) Q cachedPlatform;
- (void).cxx_destruct;
- (BOOL)_isEnrolledInBetaProgram;
- (void)queryProgramsForSystemAccountsWithPlatforms:completion:;
- (void)isDeviceEnrolledInBetaProgram:completion:;
- (void)unenrollDevice:completion:;
- (void)_resetAssetAudience;
- (id)verifyURLForCatalog:;
- (id)membershipURL;
- (id)membershipURLForPlatforms:;
- (id)serverURLWithPath:arguments:;
- (BOOL)isCacheValidForPlatforms:;
- (void)_queryProgramsForSystemAccountsWithPlatforms:completion:;
- (void)savePrograms:forPlatforms:;
- (id)saveResponse:platforms:;
- (id)availableBetaProgramsForPlatforms:;
- (void)enrollDevice:inBetaProgram:completion:;
- (void)_enrollUsingSeedingConfiguration:;
- (void)verifyCatalog:withCompletion:;
- (BOOL)_unenrollFromBetaProgram;
- (void)_setMemberEnrolled:;
- (void)_synchronizeCFPreferences;
- (id)_assetServerURLString;
- (void)_setAssetServerURLString:;
- (id)_brainServerURLString;
- (void)_setBrainServerURLString:;
- (void)_setAssetAudienceString:;
- (id)cachedPrograms;
- (void)setCachedPrograms:;
- (id)lastCached;
- (void)setLastCached:;
- (unsigned long long)cachedPlatform;
- (void)setCachedPlatform:;
+ (id)sharedManager;
+ (BOOL)_isEnrolledInBetaProgram;
@end
