@interface AWEECCpsTrackerConfigManager : NSObject
@property (nonatomic) AWEECCpsTrackerConfig config;
@property (nonatomic) NSString configString;
@property (nonatomic) NSDictionary paramConfigMap;
@property (nonatomic) NSArray allkeys;
@property (nonatomic) NSString version;
@property (nonatomic) NSArray blockList;
@property (nonatomic) q maxRetryCount;
@property (nonatomic) BOOL useNewApi;
@property (nonatomic) BOOL useOldApi;
- (BOOL)useNewApi;
- (BOOL)useOldApi;
- (id)modelFromJSONDictionary:;
- (id)paramConfigMap;
- (long long)timeIntervalForRetry:;
- (id)allkeys;
- (id)configForKey:;
- (void)setParamConfigMap:;
- (void)setConfig:;
- (long long)maxRetryCount;
- (id)init;
- (id)config;
- (id)version;
- (void).cxx_destruct;
- (id)blockList;
- (id)configString;
- (id)remoteConfig;
+ (id)sharedInstance;
@end
