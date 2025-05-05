@interface BU_IESGurdCleanCacheManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cacheCleanerManager:cleanCacheForAccessKey:channelsToBeCleaned:;
+ (void)cleanCacheForAccessKey:channel:;
+ (void)cleanCacheForAccessKey:channel:completion:;
+ (void)cleanCache;
+ (id)sharedManager;
@end
