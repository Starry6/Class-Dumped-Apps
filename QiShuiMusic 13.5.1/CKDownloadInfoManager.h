@interface CKDownloadInfoManager : NSObject
@property (nonatomic) CKMemoryCache cache;
@property (nonatomic) NSMutableDictionary ursToMd5Map;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUrsToMd5Map:;
- (id)getDownloadInfoFromMemoryWithMd5:;
- (id)getDownloadInfoFromMemoryWithUrs:;
- (id)getDownloadInfosFromMemory;
- (void)saveDownloadInfoToMemory:;
- (void)saveDownloadInfosToMemory:;
- (void)saveUrsToMd5:;
- (id)ursToMd5Map;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (id)sharedInstance;
@end
