@interface AWEPadChannelPreLoadManager : NSObject
@property (nonatomic) NSHashTable preLoadTaskTable;
@property (nonatomic) NSDictionary preloadChannelMap;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL isFeedReady;
- (void)setIsPreloading:;
- (void)preloadIfNeeded;
- (void)setupPreloadEnvironment;
- (void)setIsFeedReady:;
- (id)preloadChannelMap;
- (BOOL)isFeedReady;
- (void)preloadTaskFinish:;
- (void)addPreloadTask:channelId:;
- (id)preLoadTaskTable;
- (void)setPreLoadTaskTable:;
- (void)setPreloadChannelMap:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPreloading;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
@end
