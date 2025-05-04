@interface AWEResourceDiskManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray expiredList;
@property (nonatomic) double cleanSize;
@property (nonatomic) q maxCacheSize;
- (double)cleanSizeWithExpireTimes:;
- (void)cleanResourceWithExpireTimes:;
- (id)getAllFileList:;
- (void)removeFileByList:;
- (id)getAllExpiredListWithExpireTime:;
- (void)checkAndCleanDiskFileWithExpiredTime:;
- (void)setExpiredList:;
- (id)expiredList;
- (double)cleanSize;
- (id)init;
- (void)setCleanSize:;
- (void).cxx_destruct;
- (long long)maxCacheSize;
- (void)setMaxCacheSize:;
+ (id)getFileAccessLastDateAtPath:;
+ (id)resourceManagerOptimizeConfig;
+ (BOOL)abResourceExpiredByAccessTime;
+ (BOOL)isExpiredByAccessTime;
+ (id)sharedInstance;
@end
