@interface IESGurdChannelBlocklistManager : NSObject
@property (nonatomic) NSMutableDictionary blocklistChannelDictionary;
- (void)addChannel:forAccessKey:lastCleanTimestamp:;
- (id)blocklistChannelDictionary;
- (id)copyBlocklistChannel;
- (id)getBlockChannelStr:;
- (unsigned long long)getBlocklistCount:;
- (long long)getLastCleanTimestamp:channel:;
- (BOOL)isBlocklistChannel:accessKey:;
- (BOOL)needBlock:;
- (void)removeChannel:forAccessKey:;
- (void)setBlocklistChannelDictionary:;
- (void)syncBlocklist;
- (void)cleanCache;
- (void).cxx_destruct;
+ (id)cachedBlocklist;
+ (id)dataWithPath:;
+ (id)sharedManager;
@end
