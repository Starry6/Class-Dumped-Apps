@interface AWEKaraokeMusicDataManager : NSObject
+ (BOOL)localPathExists:expectDirectory:;
+ (id)generateLocalPathForURL:fileExtension:;
+ (void)downloadMusicWithURL:progress:completion:;
+ (void)clearDownloadedFile;
+ (id)fileDirectory;
@end
