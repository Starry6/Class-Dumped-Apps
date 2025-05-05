@interface IESGurdCleanerManager : NSObject
@property (nonatomic) NSMutableDictionary cleanerDictionary;
@property (nonatomic) NSLock cleanerLock;
@property (nonatomic) NSMutableDictionary channelsWhitelist;
- (void)setCleanerLock:;
- (void)addChannelsWhitelist:forAccessKey:;
- (id)channelsWhitelist;
- (void)cleanCacheIfNeeded;
- (id)cleanerDictionary;
- (id)cleanerLock;
- (void)registerCleanerForAccessKey:configuration:;
- (void)setChannelsWhitelist:;
- (void)setCleanerDictionary:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
