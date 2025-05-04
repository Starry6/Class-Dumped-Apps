@interface AWEOpenShareProcessUtils : NSObject
+ (long long)videoMaxSize;
+ (void)downLoadVideo:processStype:process:completion:;
+ (void)downLoadImageList:processStype:process:completion:;
+ (id)createLocalImagePath;
+ (id)extensionForContentType:;
+ (long long)limitLoadingMaxSize;
+ (id)createLocalVideoPathWithExtension:;
+ (void)getHeaderWithURL:completion:;
+ (void)getAlbumImages:process:completion:;
+ (void)checkAlbumSize:completion:;
+ (long long)imageMaxSize;
@end
