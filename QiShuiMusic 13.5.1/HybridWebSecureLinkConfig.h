@interface HybridWebSecureLinkConfig : NSObject
@property (nonatomic) NSInteger aid;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString language;
@property (nonatomic) BOOL switchOnFirstRequestSecureCheck;
@property (nonatomic) Q secureLinkCheckRedirectType;
@property (nonatomic) NSArray secureCheckHostAllowList;
- (BOOL)switchOnFirstRequestSecureCheck;
- (void)setSecureLinkCheckRedirectType:;
- (id)secureCheckHostAllowList;
- (unsigned long long)secureLinkCheckRedirectType;
- (void)setSecureCheckHostAllowList:;
- (void)setSwitchOnFirstRequestSecureCheck:;
- (void)setScene:;
- (void)setLanguage:;
- (id)language;
- (id)scene;
- (void).cxx_destruct;
- (void)setAid:;
- (int)aid;
+ (id)configWithAid:scene:language:switchOnFirstRequestSecureCheck:secureLinkCheckRedirectType:;
@end
