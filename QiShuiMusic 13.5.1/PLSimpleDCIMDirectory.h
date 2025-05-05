@interface PLSimpleDCIMDirectory : NSObject
@property (nonatomic) NSURL currentSubDirectory;
@property (nonatomic) BOOL representsCameraRoll;
@property (nonatomic) NSURL directoryURL;
- (id)init;
- (id)subDirURLForNumber:create:didCreate:;
- (void)setRepresentsCameraRoll:;
- (BOOL)representsCameraRoll;
- (id)availableFileNameNumbersInDirNumber:;
- (id)initWithDirectoryURL:subDirectorySuffix:perDirectoryLimit:userInfoPath:;
- (void).cxx_destruct;
- (BOOL)_ensureDirectoryExists:;
- (void)reset;
- (id)currentSubDirectory;
- (id)directoryURL;
- (id)fileNameNumberRangeForDirNumber:;
- (void)_saveUserInfo;
- (id)nextAvailableFileURLWithExtension:;
- (void)_loadUserInfoLastDirectoryNumber:lastFileNumber:;
+ (id)cameraRollPlistName;
+ (id)cloudPlistName;
+ (id)migrateOldPlistToNewPlist:;
@end
