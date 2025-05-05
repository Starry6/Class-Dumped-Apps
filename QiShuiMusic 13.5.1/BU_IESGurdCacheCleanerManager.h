@interface BU_IESGurdCacheCleanerManager : NSObject
@property (nonatomic) NSMutableDictionary cleanerDictionary;
@property (nonatomic) NSLock cleanerLock;
@property (nonatomic) NSMutableDictionary channelsWhitelist;
@property (nonatomic) <BU_IESGurdCacheCleanerManagerDelegate> delegate;
- (BOOL)isChannelInWhitelist:accessKey:;
- (void)setCleanerLock:;
- (void)addChannelsWhitelist:forAccessKey:;
- (id)channelWhitelistForAccessKey:;
- (id)channelsWhitelist;
- (void)cleanCacheIfNeeded;
- (Class)cleanerClassWithPolicy:;
- (id)cleanerDictionary;
- (id)cleanerForAccessKey:;
- (id)cleanerLock;
- (id)cleaners;
- (void)registerCacheCleanerForAccessKey:configuration:;
- (void)setChannelsWhitelist:;
- (void)setCleanerDictionary:;
- (void)setupNotification;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
