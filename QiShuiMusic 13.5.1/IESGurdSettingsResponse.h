@interface IESGurdSettingsResponse : NSObject
@property (nonatomic) NSString appVersion;
@property (nonatomic) q version;
@property (nonatomic) IESGurdSettingsConfig settingsConfig;
@property (nonatomic) IESGurdSettingsRequestMeta requestMeta;
@property (nonatomic) IESGurdSettingsResourceMeta resourceMeta;
- (void)setRequestMeta:;
- (id)requestMeta;
- (id)resourceMeta;
- (void)setResourceMeta:;
- (void)setSettingsConfig:;
- (id)settingsConfig;
- (void)setAppVersion:;
- (id)appVersion;
- (void)setVersion:;
- (long long)version;
- (void).cxx_destruct;
+ (id)responseWithDictionary:;
@end
