@interface BDATOpenUrlChecker : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSMutableArray openUrlQueue;
@property (nonatomic) NSDictionary showEvents;
- (void)C2S_processAlert:;
- (void)addOpenUrlApp;
- (void)checkOpenUrlAppWithUrl:;
- (void)matchingFailedWithUrl:matchNumber:;
- (id)openUrlQueue;
- (void)removeExpirationItem;
- (void)setOpenUrlQueue:;
- (void)setShowEvents:;
- (id)showEvents;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedChecker;
@end
