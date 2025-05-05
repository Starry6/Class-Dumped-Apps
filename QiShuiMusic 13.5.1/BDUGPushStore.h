@interface BDUGPushStore : NSObject
@property (nonatomic) NSUserDefaults appGroupDefaults;
@property (nonatomic) NSString dataPath;
@property (nonatomic) NSMutableDictionary groupDict;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) NSString appGroupsIdentifier;
- (id)appGroupsIdentifier;
- (void)flushToDisk;
- (void)printNSELog;
- (void)setAppGroupsIdentifier:;
- (void)setAppGroupsObject:forKey:;
- (void)setHistoricalUserIDs:;
- (void)sortAndReportLog:;
- (id)init;
- (void)dealloc;
- (void)setAppGroupDefaults:;
- (id)serialQueue;
- (id)groupDict;
- (void)setGroupDict:;
- (void).cxx_destruct;
- (id)appGroupDefaults;
- (void)setSerialQueue:;
- (id)dataPath;
- (void)setDataPath:;
+ (id)sharedStore;
@end
