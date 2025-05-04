@interface AWEIMGroupChainsSettingModel : NSObject
@property (nonatomic) NSDictionary configs;
- (long long)getFoldMinLimit;
- (id)getStartChainsUrl;
- (id)getJoinChainsUrl;
- (long long)getChainsExpireTime;
- (BOOL)getChainsSwitch;
- (void)setConfigs:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)configs;
@end
