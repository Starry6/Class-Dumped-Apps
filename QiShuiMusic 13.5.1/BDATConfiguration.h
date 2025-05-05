@interface BDATConfiguration : NSObject
@property (nonatomic) NSDictionary config;
@property (nonatomic) NSString customUserAgent;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableDebug;
- (id)configuration:;
- (id)dictionaryValue:;
- (void)synConfiguration:error:;
- (BOOL)enable;
- (BOOL)enableDebug;
- (id)init;
- (void)setCustomUserAgent:;
- (void)setConfig:;
- (id)customUserAgent;
- (void).cxx_destruct;
- (void)setEnableDebug:;
- (id)config;
- (void)setEnable:;
- (void)setupConfig;
+ (BOOL)isValidPlistDictionary:;
+ (BOOL)isValidPlistObject:;
+ (id)defaultConfig;
@end
