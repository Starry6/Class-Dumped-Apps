@interface HMDURLCacheManager : NSObject
@property (nonatomic) NSMutableSet customCachePath;
@property (nonatomic) BOOL isRunning;
- (id)customCachePath;
- (BOOL)checkAvailabaleCustomCachePath:urlCacheInstance:;
- (BOOL)managerIsRunning;
- (void)registerCustomCachePath:;
- (void)setCustomCachePath:;
- (void)unregisterCustomCachePath:;
- (id)init;
- (void)start;
- (void)stop;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
