@interface CSJApplistHelper : NSObject
@property (nonatomic) NSArray systemSchemes;
@property (nonatomic) BUPersistence schemeStateKV;
@property (nonatomic) BUPersistence ulinkStateKV;
@property (nonatomic) NSMutableDictionary ulinkSchemeDict;
- (BOOL)isSystemScheme:;
- (id)parseUlinkHost:;
- (id)ulinkSchemeDict;
- (long long)checkAppInstallStatus:;
- (long long)getInstallState:;
- (BOOL)isSchemeUrl:;
- (void)mapUlink:toDeepLink:;
- (id)parseSchemeField:;
- (void)reportAppInstall:installed:;
- (void)saveApplist;
- (id)schemeStateKV;
- (void)setSchemeStateKV:;
- (void)setSystemSchemes:;
- (void)setUlinkSchemeDict:;
- (void)setUlinkStateKV:;
- (id)systemSchemes;
- (id)ulinkStateKV;
- (void)updateInstallState:linkUrl:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
