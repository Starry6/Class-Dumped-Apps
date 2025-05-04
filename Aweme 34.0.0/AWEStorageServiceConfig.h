@interface AWEStorageServiceConfig : NSObject
@property (nonatomic) BOOL enableMMKVMonitor;
@property (nonatomic) q MMKVMaxCount;
- (void)loadConfig;
- (BOOL)enableMMKVMonitor;
- (void)setEnableMMKVMonitor:;
- (long long)MMKVMaxCount;
- (void)setMMKVMaxCount:;
- (id)init;
+ (id)sharedInstance;
@end
