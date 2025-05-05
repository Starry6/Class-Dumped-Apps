@interface BDATCache : NSObject
@property (nonatomic) NSMutableArray memCahe;
- (id)memCahe;
- (void)appendRecord:;
- (id)cachePathURL;
- (void)setMemCahe:;
- (void)setupCache;
- (id)records;
- (id)init;
- (void)cleanup;
- (void)save:;
- (void).cxx_destruct;
- (id)historyRecords;
@end
