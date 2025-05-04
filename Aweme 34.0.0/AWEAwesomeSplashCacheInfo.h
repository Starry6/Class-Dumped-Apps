@interface AWEAwesomeSplashCacheInfo : NSObject
@property (nonatomic) BOOL hasCache;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) NSURL cachePath;
@property (nonatomic) q fileSize;
- (void)setHasCache:;
- (BOOL)isComplete;
- (void)setIsComplete:;
- (id)cachePath;
- (void)setFileSize:;
- (long long)fileSize;
- (void).cxx_destruct;
- (void)setCachePath:;
- (BOOL)hasCache;
@end
