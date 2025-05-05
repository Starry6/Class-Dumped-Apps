@interface SOConfigurationClient : NSObject
@property (nonatomic) SOConfiguration configuration;
@property (nonatomic) q configVersion;
- (long long)configVersion;
- (id)init;
- (id)profileForURL:responseCode:;
- (void)_checkNewVersion;
- (id)configuration;
- (void).cxx_destruct;
- (void)_reloadConfig;
- (BOOL)willHandleURL:responseCode:callerBundleIdentifier:;
+ (id)defaultClient;
@end
