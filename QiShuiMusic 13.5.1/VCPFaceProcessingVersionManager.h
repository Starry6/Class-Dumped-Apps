@interface VCPFaceProcessingVersionManager : NSObject
- (id)initWithPhotoLibrary:;
- (int)currentProcessingVersion;
- (int)resetAnalysisDataWithResetLevel:error:;
- (void).cxx_destruct;
- (BOOL)_updateVersionStateFileWithError:;
- (int)defaultProcessingVersion;
- (int)migrateFaceProcessingToVersion:;
- (id)_versionStateURL;
- (int)_updateCurrentProcessingVersion:;
+ (id)resetLevelDescription:;
+ (id)sharedManagerForPhotoLibrary:;
@end
