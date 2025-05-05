@interface VodSettingsConfigEnv : NSObject
@property (nonatomic) NSString usEast;
@property (nonatomic) NSString sgSingapore;
@property (nonatomic) NSString cnNorth;
@property (nonatomic) q region;
@property (nonatomic) NSDictionary appInfo;
@property (nonatomic) NSDictionary sdkInfo;
@property (nonatomic) NSString host;
@property (nonatomic) NSString path;
- (void)setSgSingapore:;
- (id)cnNorth;
- (id)sdkInfo;
- (id)getHost:;
- (void)setCnNorth:;
- (void)setSdkInfo:;
- (void)setUsEast:;
- (id)sgSingapore;
- (id)usEast;
- (id)path;
- (id)init;
- (void)setRegion:;
- (id)host;
- (void)setPath:;
- (long long)region;
- (id)appInfo;
- (void).cxx_destruct;
- (void)setAppInfo:;
+ (id)shareConfig;
@end
