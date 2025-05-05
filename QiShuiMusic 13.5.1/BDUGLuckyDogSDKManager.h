@interface BDUGLuckyDogSDKManager : NSObject
@property (nonatomic) NSDictionary currentConfiguration;
@property (nonatomic) BOOL isSDKEnabled;
@property (nonatomic) BOOL isDebugModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__configLuckyServiceSettings:;
- (BOOL)isDebugModel;
- (BOOL)isSDKEnabled;
- (void)sdkConfigDidUpdate;
- (void)setIsDebugModel:;
- (void)setIsSDKEnabled:;
- (id)currentConfiguration;
- (id)init;
+ (BOOL)isBetweenActivityTime:;
+ (BOOL)isSDKEnabled;
+ (id)luckyDogSDKVersion;
+ (void)sdkConfigDidUpdate;
+ (void)sdkDidStartUp;
+ (void)sdkSessionLaunch;
+ (id)currentConfiguration;
+ (void)setDebugMode:;
+ (id)sharedInstance;
+ (id)serviceProtocol;
+ (BOOL)isDebugMode;
@end
