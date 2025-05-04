@interface AWEStorageServiceAutoChooseModule : NSObject
@property (nonatomic) q storageModuleChooseThreshold;
@property (nonatomic) BOOL enable;
- (BOOL)autoChooseEnable;
- (id)serializeObject:withError:;
- (int)chooseModuleWith:encodedData:;
- (void)useAWEStorageFile:key:domain:encodedData:error:;
- (void)useAWEStorage:key:domain:type:encodedData:error:;
- (void)updateMetaIfNeeded:withMetaKey:useModule:;
- (void)setupSetPtr;
- (void)setupUnifyStorage;
- (void)setupDeletedObj;
- (void)setUnifyStorage:;
- (void)setDeletedObj:;
- (id)syncReadFromAWEStorageFile:domain:;
- (void)setAutoChooseEnable:;
- (BOOL)setObject:forKey:withDomain:error:;
- (id)objectForKey:domain:withStorage:;
- (void)removeObjectForKey:domain:withStorage:;
- (long long)storageModuleChooseThreshold;
- (void)setStorageModuleChooseThreshold:;
- (BOOL)enable;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)sharedInstance;
@end
