@interface CKCacheInfoManager : NSObject
@property (nonatomic) <CKCacheManagerProtocol> dbManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)addOrUpdateCache:;
- (BOOL)deleteCache:;
- (id)queryAllCache;
- (id)queryCache:;
- (void)setDBImpl:;
- (id)dbManager;
- (void)setDbManager:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
