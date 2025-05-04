@interface AWEIMLeagueFileManager : NSObject
- (id)checkHasLocalFileWithConfig:;
- (BOOL)isSupportPreviewWithFileType:;
- (void)openFileWithFileUrl:fileType:fileName:;
- (id)generateFileUriMd5String:fileType:;
- (id)generateUniqueId:;
- (void)openFileUseOtherWithFileUrl:;
+ (id)sharedInstance;
@end
