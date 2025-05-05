@interface FontProviderManager : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSDictionary appSubscriptionIndo;
- (void)ping;
- (id)init;
- (id)auditToken;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)registeredFontsInfo:;
- (id)normalizeURLs:addSandboxExtension:;
- (void)_registerFonts:enabled:completionHandler:;
- (void)_unregisterFonts:completionHandler:;
- (void)_updateAppInfo;
- (id)appSubscriotionInfo;
- (id)appSubscriptionIndo;
- (void)setAppSubscriptionIndo:;
+ (id)sharedManager;
+ (void)registerFonts:enabled:completionHandler:;
+ (void)unregisterFonts:completionHandler:;
+ (id)registeredFontsInfo:;
+ (void)updateAppInfo;
@end
