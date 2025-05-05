@interface ASSStorageAccesser : NSObject
+ (id)getRandomizedID;
+ (id)loadGID;
+ (void)clearStorage;
+ (id)getApdidcFromFile;
+ (id)getFromFile;
+ (id)getNewRadomizedID;
+ (id)loadApdidc;
+ (id)loadJBErrorHistory;
+ (id)loadLastLoginTime;
+ (id)loadPreviousApdid;
+ (id)loadStorageModelFromKeychain;
+ (id)loadTrustData;
+ (void)saveApdidc:;
+ (void)saveCurrentLoginTime:;
+ (void)saveGID:;
+ (void)saveJBErrorHistory:;
+ (void)saveStorageModel:;
+ (void)saveTrustData:;
@end
