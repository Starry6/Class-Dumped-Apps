@interface AMapZipArchive : NSObject
@property (nonatomic) BOOL open;
@property (nonatomic) BOOL close;
- (BOOL)writeData:filename:withPassword:;
- (BOOL)writeFile:withPassword:;
- (BOOL)writeFileAtPath:withFileName:withPassword:;
- (BOOL)writeFolderAtPath:withFolderName:withPassword:;
- (void)zipInfo:setDate:;
- (BOOL)open;
- (BOOL)close;
- (void).cxx_destruct;
- (id)initWithPath:;
+ (id)_temporaryPathForDiscardableFile;
+ (id)_dateWithMSDOSFormat:;
+ (BOOL)createZipFileAtPath:withContentsOfDirectory:keepParentDirectory:withPassword:;
+ (BOOL)createZipFileAtPath:withContentsOfDirectory:withPassword:;
+ (BOOL)createZipFileAtPath:withFilesAtPaths:withPassword:;
+ (BOOL)unzipFileAtPath:toDestination:;
+ (BOOL)unzipFileAtPath:toDestination:overwrite:password:error:;
+ (BOOL)unzipFileAtPath:toDestination:delegate:;
+ (BOOL)unzipFileAtPath:toDestination:overwrite:password:error:delegate:;
+ (BOOL)unzipFileAtPath:toDestination:overwrite:password:progressHandler:completionHandler:;
+ (BOOL)unzipFileAtPath:toDestination:progressHandler:completionHandler:;
+ (BOOL)unzipFileAtPath:toDestination:overwrite:password:error:delegate:progressHandler:completionHandler:;
+ (BOOL)createZipFileAtPath:withFilesAtPaths:;
+ (BOOL)createZipFileAtPath:withContentsOfDirectory:;
+ (BOOL)createZipFileAtPath:withContentsOfDirectory:keepParentDirectory:;
@end
