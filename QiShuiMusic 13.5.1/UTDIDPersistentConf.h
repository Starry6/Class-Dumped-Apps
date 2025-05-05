@interface UTDIDPersistentConf : NSObject
@property (nonatomic) BOOL mAlwaysSyncWhenCommit;
- (BOOL)mAlwaysSyncWhenCommit;
- (void)setMAlwaysSyncWhenCommit:;
- (void)syncToKC:;
- (void)syncToPF:;
- (void)commit;
- (void)setObject:forKey:;
- (void)clear;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)reset;
- (void)removeObjectForKey:;
- (void)syncData;
- (void)initData;
- (void)create:;
+ (id)initWithIdentifier:;
@end
