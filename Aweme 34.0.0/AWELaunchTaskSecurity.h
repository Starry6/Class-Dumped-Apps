@interface AWELaunchTaskSecurity : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserId;
- (id)installId;
- (void)executeTask;
- (void)didReceiveApiResponse:URL:;
- (BOOL)allowSensorCollection;
- (void)handleForceCrash:;
- (void)_showAlertViewForRebuild;
- (id)deviceId;
- (id)sessionId;
- (id)init;
- (id)userId;
- (void)dealloc;
- (id)appId;
+ (id)defaultSecurityConfig;
+ (id)sharedInstance;
+ (void)execute;
@end
