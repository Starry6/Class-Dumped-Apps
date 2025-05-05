@interface BDXWebSecureLinkConfig : NSObject
@property (nonatomic) NSString language;
@property (nonatomic) BDWebSecureLinkCustomSetting customSetting;
@property (nonatomic) BOOL switchOnFirstRequestSecureCheck;
@property (nonatomic) Q secureLinkCheckRedirectType;
@property (nonatomic) NSString secureLinkBaseUrl;
@property (nonatomic) BOOL strictMode;
@property (nonatomic) NSArray allowedHosts;
@property (nonatomic) @? willInterceptFirstJump;
- (BOOL)switchOnFirstRequestSecureCheck;
- (void)setSecureLinkCheckRedirectType:;
- (id)customSetting;
- (id)secureLinkBaseUrl;
- (unsigned long long)secureLinkCheckRedirectType;
- (void)setCustomSetting:;
- (void)setSecureLinkBaseUrl:;
- (void)setStrictMode:;
- (void)setSwitchOnFirstRequestSecureCheck:;
- (void)setWillInterceptFirstJump:;
- (BOOL)strictMode;
- (id)willInterceptFirstJump;
- (void)setLanguage:;
- (id)language;
- (void).cxx_destruct;
- (id)allowedHosts;
- (void)setAllowedHosts:;
+ (id)configWithLanguage:switchOnFirstRequestSecureCheck:secureLinkCheckRedirectType:;
@end
