@interface ICStorageManager : NSObject
@property (nonatomic) Q storageSpaceAvailable;
@property (nonatomic) BOOL cachingEnabled;
- (id)init;
- (unsigned long long)storageSpaceAvailable;
- (void)ensureStorageIsAvailable:withCompletionHandler:;
- (void).cxx_destruct;
- (BOOL)cachingEnabled;
+ (id)sharedManager;
@end
