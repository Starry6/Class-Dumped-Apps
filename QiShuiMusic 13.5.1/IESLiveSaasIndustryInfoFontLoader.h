@interface IESLiveSaasIndustryInfoFontLoader : NSObject
@property (nonatomic) BOOL isFetching;
@property (nonatomic) HTSLiveUnzipper unzipper;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
- (BOOL)_isFontRegisted:;
- (void)_registerFont:fontName:;
- (void)deleteFileIfNeeded:;
- (id)downloadCacheURLWithMd5:;
- (void)downloadGiftWithURL:completed:;
- (id)fileMd5PathWithModel:fontName:;
- (void)setUnzipper:;
- (void)tryLoadFontWithUrl:fontName:finishBlock:;
- (id)unzipper;
- (id)cachePath;
- (id)init;
- (void)setWorkQueue:;
- (id)workQueue;
- (void).cxx_destruct;
- (BOOL)isFetching;
- (void)setIsFetching:;
+ (id)sharedLoader;
@end
