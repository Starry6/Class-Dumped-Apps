@interface SDSeedProgramManager : NSObject
+ (void)_createFeedbackAssistantSymlink;
+ (long long)_currentSeedProgramFromDisk;
+ (BOOL)isEnrolledInSeedProgram;
+ (BOOL)enrollInSeedProgram:deletingSystemURL:;
+ (BOOL)_canEnrollInBetaSoftware;
+ (void)_clearAudience;
+ (id)stringForSeedProgram:;
+ (void)_setSeedOptOutUIDisabled:;
+ (void)_setHelpFeedbackMenuEnabled:;
+ (long long)_seedProgramForString:;
+ (id)_loadSeedCatalogsFromPlist;
+ (BOOL)unenrollFromSeedProgram;
+ (void)_setSeedProgramPref:;
+ (BOOL)_setCatalogForSeedProgram:;
+ (BOOL)_currentCatalogIsSeed;
+ (long long)currentSeedProgramForDiskAtPath:;
+ (id)_loadSeedAudiencesFromPlist;
+ (BOOL)_setAudienceForSeedProgram:;
+ (void)enrollInSeedProgramNamed:withAssetAudience:completion:;
+ (BOOL)enrollInSeedProgram:;
+ (id)currentEnrollmentMetadata;
+ (void)_clearSeedCatalog;
+ (BOOL)_currentAudienceIsSeed;
+ (BOOL)fixUpAssetAudience;
+ (long long)currentSeedProgram;
+ (BOOL)canFileFeedback;
@end
