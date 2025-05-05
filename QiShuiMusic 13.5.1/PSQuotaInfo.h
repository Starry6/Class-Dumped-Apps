@interface PSQuotaInfo : NSObject
@property (nonatomic) Q totalStorage;
@property (nonatomic) Q usedStorage;
- (id)init;
- (void)setTotalStorage:;
- (unsigned long long)totalStorage;
- (unsigned long long)usedStorage;
- (void).cxx_destruct;
- (void)setUsedStorage:;
- (void)setStorageInUse:forMediaKind:;
- (unsigned long long)storageInUseForMediaKind:;
@end
