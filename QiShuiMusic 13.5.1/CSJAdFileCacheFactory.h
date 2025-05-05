@interface CSJAdFileCacheFactory : NSObject
@property (nonatomic) NSMutableDictionary cacheDictonary;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (id)cacheDictonary;
- (void)setCacheDictonary:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (id)_pbu_createCacheWithFileCacheType:;
+ (void)clearAllCache;
+ (id)fileCacheWithFileCacheType:;
+ (id)sharedInstance;
@end
