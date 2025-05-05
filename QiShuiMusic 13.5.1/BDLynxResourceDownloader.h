@interface BDLynxResourceDownloader : NSObject
@property (nonatomic) NSURLSession session;
@property (nonatomic) NSString cacheDir;
- (id)cacheDir;
- (void)downloadLynxFile:completion:;
- (id)md5StringOfString:;
- (void)setCacheDir:;
- (void)setSession:;
- (id)init;
- (id)session;
- (void).cxx_destruct;
+ (id)sharedDownloader;
@end
