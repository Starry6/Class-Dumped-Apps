@interface AWEECOMIMPlatformDynamicCardContextAppInfoModel : MTLModel
@property (nonatomic) NSString env;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString bffJSVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)env;
- (void)setEnv:;
- (id)bffJSVersion;
- (void)setBffJSVersion:;
- (id)channel;
- (id)appVersion;
- (void)setAppVersion:;
- (void)setChannel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
