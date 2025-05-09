@interface DIRSConfig : NSObject
@property (nonatomic) DIRSComplianceConfiguration compliance;
@property (nonatomic) DIRSEventConfiguration event;
@property (nonatomic) NSMutableDictionary extensionSettings;
@property (nonatomic) NSMutableSet registerClasses;
@property (nonatomic) NSMutableSet disabledModules;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString appGroupId;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString subId;
@property (nonatomic) NSDictionary launchOptions;
@property (nonatomic) BOOL encryptionEnabled;
@property (nonatomic) <IRISEndpoint> endpoint;
@property (nonatomic) q logLevel;
@property (nonatomic) @? configureUserLoggerBlock;
@property (nonatomic) @? configureHTTPHeaderFieldsBlock;
@property (nonatomic) @? configureCommonParametersBlock;
@property (nonatomic) @? configureCustomHeaderBlock;
@property (nonatomic) @? onError;
- (id)disabledModules;
- (id)appGroupId;
- (id)compliance;
- (id)configureCommonParametersBlock;
- (id)configureCustomHeaderBlock;
- (id)configureHTTPHeaderFieldsBlock;
- (id)configureUserLoggerBlock;
- (void)disableModule:;
- (id)disabledModuleIds;
- (BOOL)encryptionEnabled;
- (id)extensionSettings;
- (id)registeredModules;
- (void)setAppGroupId:;
- (void)setCompliance:;
- (void)setConfigureCommonParametersBlock:;
- (void)setConfigureCustomHeaderBlock:;
- (void)setConfigureHTTPHeaderFieldsBlock:;
- (void)setConfigureUserLoggerBlock:;
- (void)setDisabledModules:;
- (void)setEncryptionEnabled:;
- (void)setExtensionSettings:;
- (void)setRegisterClasses:;
- (void)setSubId:;
- (id)subId;
- (void)unregisterModule:;
- (void)setAppVersion:;
- (void)setBuildVersion:;
- (id)buildVersion;
- (void)setChannel:;
- (id)appVersion;
- (id)init;
- (void)setEvent:;
- (id)event;
- (id)appId;
- (id)channel;
- (void)setEndpoint:;
- (void)setAppId:;
- (void)setAppName:;
- (id)valueForUndefinedKey:;
- (id)appName;
- (void)setLogLevel:;
- (void)setValue:forUndefinedKey:;
- (long long)logLevel;
- (void).cxx_destruct;
- (id)endpoint;
- (BOOL)registerModule:;
- (id)copyWithZone:;
- (id)launchOptions;
- (void)setLaunchOptions:;
- (void)setOnError:;
- (id)onError;
- (id)registerClasses;
+ (id)configWithIdentifier:launchOptions:;
@end
