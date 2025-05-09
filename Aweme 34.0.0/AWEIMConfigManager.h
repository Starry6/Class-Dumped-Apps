@interface AWEIMConfigManager : NSObject
@property (nonatomic) q service;
@property (nonatomic) q method;
@property (nonatomic) NSString fpID;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString webSocketAppKey;
- (id)fpID;
- (void)setFpID:;
- (id)webSocketAppKey;
- (void)setWebSocketAppKey:;
- (id)init;
- (long long)service;
- (void)setService:;
- (void)setMethod:;
- (id)appID;
- (void)setAppID:;
- (void).cxx_destruct;
- (long long)method;
+ (BOOL)isPPEEnv;
+ (BOOL)enableAddressBook;
+ (id)imServerURL;
+ (id)msgEmojiConfig;
+ (BOOL)isBOEEvn;
+ (BOOL)shouldEnableBOE;
+ (BOOL)shouldEnablePPE;
+ (BOOL)enableWS;
+ (id)webSocketURLs:;
+ (BOOL)enableDynamicWebSocketURL;
+ (id)sharedInstance;
@end
