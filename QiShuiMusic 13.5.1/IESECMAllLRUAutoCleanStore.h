@interface IESECMAllLRUAutoCleanStore : NSObject
@property (nonatomic) MMKV autoCleanStore;
@property (nonatomic) q maxCount;
@property (nonatomic) q clearExpireTime;
@property (nonatomic) BOOL useNew;
@property (nonatomic) BOOL forbidTrim;
- (long long)clearExpireTime;
- (id)autoCleanStore;
- (BOOL)forbidTrim;
- (id)objectOfClass:forKey:;
- (void)setAutoCleanStore:;
- (void)setClearExpireTime:;
- (void)setForbidTrim:;
- (void)setUseNew:;
- (BOOL)useNew;
- (void)setObject:forKey:;
- (long long)maxCount;
- (void)setMaxCount:;
- (void).cxx_destruct;
- (void)trim;
+ (id)shareInstance;
@end
