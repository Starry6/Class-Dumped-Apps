@interface PLImportFileManager : NSObject
- (id)initWithPathManager:;
- (id)init;
- (id)nextAvailableFilePathInDirectory:withExtension:;
- (id)urlForNewDCIMFolderWithFolderNumber:;
- (id)_DCIMFolderNameWithNumber:;
- (BOOL)removeUnusedDCIMDirectoryAtPath:;
- (id)_dcimDirectory;
- (void).cxx_destruct;
+ (BOOL)isImportDirectoryFolderName:;
+ (BOOL)isCameraDirectoryFolderName:;
@end
