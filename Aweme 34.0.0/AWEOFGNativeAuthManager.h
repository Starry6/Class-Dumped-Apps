@interface AWEOFGNativeAuthManager : NSObject
@property (nonatomic) NSMutableDictionary authCacheDict;
@property (nonatomic) NSObject<OS_dispatch_semaphore> authMethodAccessLock;
- (BOOL)isAuthorizedForClientKey:appID:scope:error:;
- (void)setAuthCacheDict:;
- (void)setAuthMethodAccessLock:;
- (id)authCacheDict;
- (id)authMethodAccessLock;
- (id)localAuthCacheDirectory;
- (id)readLocalAuthMethodCache;
- (BOOL)_isAuthorizedForClientKey:appID:scope:error:;
- (BOOL)isValidWithClientKey:appID:error:;
- (id)localAuthCacheFile;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (id)errorWithCode:message:;
+ (id)sharedManager;
@end
