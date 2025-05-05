@interface NETransparentProxyManager : NEVPNManager
@property (nonatomic) BOOL isFromMDM;
- (id)init;
- (BOOL)isProtocolTypeValid:;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:;
- (BOOL)isFromMDM;
+ (void)loadAllFromPreferencesWithCompletionHandler:;
+ (void)loadEverythingFromPreferencesWithCompletionHandler:;
@end
