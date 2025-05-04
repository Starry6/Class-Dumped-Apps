@interface AWEPaySKMVoiceBroadcastCacheManager : NSObject
@property (nonatomic) NSMutableDictionary hashMap;
@property (nonatomic) AWEPaySKMVoiceBroadcastCache head;
@property (nonatomic) AWEPaySKMVoiceBroadcastCache tail;
@property (nonatomic) NSMutableArray getTaskList;
@property (nonatomic) BOOL initilized;
- (id)getCache:;
- (id)hashMap;
- (void)setHashMap:;
- (BOOL)checkAndCreateFileDirectoryIfNeed;
- (id)getFilePath:;
- (void)bringToFront:;
- (void)syncListToDisk;
- (id)creatNode:prev:next:;
- (void)setGetTaskList:;
- (BOOL)initilized;
- (void)setInitilized:;
- (void)setTail:;
- (id)tail;
- (void)saveCache:;
- (id)head;
- (void).cxx_destruct;
- (void)setHead:;
- (void)initData;
- (id)getTaskList;
+ (id)defaultManager;
@end
