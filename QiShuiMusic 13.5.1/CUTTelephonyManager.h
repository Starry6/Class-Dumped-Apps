@interface CUTTelephonyManager : NSObject
@property (nonatomic) ^{__CTServerConnection=} _serverConnection;
@property (nonatomic) ^v _suspendDormancyAssertion;
@property (nonatomic) BOOL registered;
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSMutableSet disableFastDormancyTokens;
@property (nonatomic) BOOL disableFastDormancy;
- (void)setRegistered:;
- (BOOL)registered;
- (id)init;
- (void)dealloc;
- (BOOL)disableFastDormancy;
- (void)removeFastDormancyDisableToken:;
- (id)disableFastDormancyTokens;
- (id)lock;
- (id)_suspendDormancyAssertion;
- (void)set_suspendDormancyAssertion:;
- (void)_adjustFastDormancyTokens;
- (void).cxx_destruct;
- (id)_serverConnection;
- (void)_setFastDormancySuspended:;
- (void)__adjustFastDormancyTokens;
- (void)addFastDormancyDisableToken:;
- (void)set_serverConnection:;
- (void)setLock:;
- (void)setDisableFastDormancyTokens:;
+ (id)sharedInstance;
@end
