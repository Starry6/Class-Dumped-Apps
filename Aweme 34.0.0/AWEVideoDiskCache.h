@interface AWEVideoDiskCache : NSObject
@property (nonatomic) # cacheClass;
@property (nonatomic) NSTimer timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupTrimTimer;
- (Class)cacheClass;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void)setCacheClass:;
- (void).cxx_destruct;
- (void)_addNotificationObservers;
+ (void)trimDiskCacheToQuota;
+ (void)hasCacheForKey:completion:;
+ (void)getCacheInfoForKey:completion:;
+ (void)trimDiskCacheToSize:;
+ (unsigned long long)freeFileSystemSize;
+ (void)metaDataForKeySync:completion:;
+ (void)appendCacheData:offset:forKey:mimeType:fileLength:completion:;
+ (void)finishCacheForKey:originURLString:completion:;
+ (void)cacheDataForKey:offset:length:completion:;
+ (void)cacheDataForKeySync:offset:length:completion:;
+ (void)metaDataForKey:completion:;
+ (void)sizeWithCompletion:;
+ (void)clearForKeys:;
+ (void)disableAutoTrimForKey:;
+ (void)enableAutoTrimForKey:;
+ (long long)sizeAtFilePath:;
+ (void)hasCacheForURLString:completion:;
+ (void)getCacheInfoForURLString:completion:;
+ (void)clearForURLString:;
+ (BOOL)hasEnoughFreeDiskSize;
+ (BOOL)hasEnoughCacheForURLString:videoDuration:networkSpeed:;
+ (void)disableAutoTrimForURLString:;
+ (void)enableAutoTrimForURLString:;
+ (id)sharedInstance;
+ (id)cachePath;
+ (void)clear;
+ (id)cacheQueue;
@end
