@interface BDASplashTimeTracker : NSObject
@property (nonatomic) NSMutableDictionary timestampCache;
@property (nonatomic) NSObject<OS_dispatch_queue> cacheQueue;
@property (nonatomic) q splashShowingStatus;
- (id)getLaunchTimestamps;
- (void)setSplashShowingStatus:;
- (void)setTimestampCache:;
- (void)setTimestampForKey:;
- (long long)splashShowingStatus;
- (id)timestampCache;
- (void)trackUDPRequestDuration:;
- (id)init;
- (void).cxx_destruct;
- (void)setCacheQueue:;
- (id)cacheQueue;
- (double)timestampForKey:;
- (void)trackDuration;
+ (id)sharedInstance;
@end
