@interface PLDemoModeUtilities : NSObject
@property (nonatomic) NSString demoContentPhotoLibraryTemplatePath;
@property (nonatomic) NSString demoContentStagingBasePath;
@property (nonatomic) NSString demoContentPhotoLibraryStagingPath;
@property (nonatomic) NSString demoContentPhotoLibraryPrestagingPath;
@property (nonatomic) PLPhotoLibraryPathManager targetPhotoLibraryPathManager;
@property (nonatomic) Q options;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)demoContentPhotoLibraryStagingPath;
- (id)demoContentPhotoLibraryPrestagingPath;
- (id)initWithDemoContentTemplatePath:stagingBasePath:targetPhotoLibraryPathManager:options:;
- (BOOL)_evalSystemSafetyCheck:;
- (BOOL)replaceTargetPhotoLibraryWithStagedDemoLibraryIfExists;
- (void)warmUpDemoLibraryInstalledFromStagedTemplate;
- (BOOL)prepareForStoreDemoModeByStagingDemoLibraryContentFromTemplate;
- (void)kickstartStagedDemoContentInstallationByKillingAllClients;
- (long long)markAssetOriginalsInTargetPhotoLibraryAsLegacyDemoContent:;
- (id)fetchDemoContentResultsInLibrary:;
- (BOOL)cleanupForStoreDemoModeByRemovingNonDemoContentFromTargetLibrary;
- (id)demoContentPhotoLibraryTemplatePath;
- (id)demoContentStagingBasePath;
- (id)targetPhotoLibraryPathManager;
+ (id)systemDemoContentPhotoLibraryTemplatePath;
+ (id)systemDemoContentStagingBasePath;
+ (id)newDemoModeUtilitiesWithDefaultSystemPaths;
@end
