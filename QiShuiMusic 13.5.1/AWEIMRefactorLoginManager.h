@interface AWEIMRefactorLoginManager : NSObject
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logoutIMService;
- (BOOL)shouldInitIMSDK;
- (void)__migrateAWEStorageToIESIMMMKVStorage;
- (id)aAWEIMModuleConfigAdapterProtocol;
- (BOOL)hasLogin;
- (void)iesim_fetchRemoteTokenWithCompletion:;
- (id)iesim_passportToken;
- (BOOL)isRequesting;
- (void)loginIMService;
- (void)setIsRequesting:;
- (id)options;
- (id)loginManager;
+ (Class)aAWEIMModuleConfigAdapterProtocolClass;
+ (id)sharedInstance;
@end
