@interface DOCTagCloudSource : NSObject
@property (nonatomic) NSUbiquitousKeyValueStore store;
@property (nonatomic) NSObject iCloudToken;
@property (nonatomic) NSObject<OS_dispatch_queue> workingQueue;
@property (nonatomic) <DOCTagRegistryProtocol> tagRegistry;
- (void)dealloc;
- (void)setStore:;
- (void).cxx_destruct;
- (void)ubiquityIdentityDidChange;
- (id)workingQueue;
- (id)store;
- (void)kvsStoreDidChange:;
- (id)initWithTagRegistry:;
- (void)syncTagsWithCloud:;
- (void)syncTagsWithCloud:isICloudAvailable:;
- (void)readTagsFromCloud:;
- (void)writeTagsToCloud;
- (void)iCloudTokenWithCompletionBlock:;
- (void)isICloudAvailableWithCompletionBlock:;
- (id)iCloudTagsDictionary;
- (id)iCloudTags;
- (long long)iCloudTagVersion;
- (long long)iCloudTagSerialNumber;
- (id)iCloudToken;
- (void)setICloudToken:;
- (id)tagRegistry;
- (void)setTagRegistry:;
@end
