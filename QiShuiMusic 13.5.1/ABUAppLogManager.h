@interface ABUAppLogManager : NSObject
@property (nonatomic) NSString deviceID;
@property (nonatomic) NSString installID;
@property (nonatomic) NSString ssID;
@property (nonatomic) @? didCompletion;
@property (nonatomic) BOOL isFirstCallback;
@property (nonatomic) BOOL isFirstRegister;
- (BOOL)isFirstCallback;
- (BOOL)isFirstRegister;
- (void)_checkDeviceId;
- (void)autoTrackNotificationRegisterSuccessAction:;
- (id)didCompletion;
- (void)setDidCompletion:;
- (void)setInstallID:;
- (void)setIsFirstCallback:;
- (void)setSsID:;
- (id)ssID;
- (void)_setupObserver;
- (id)installID;
- (void)setDeviceID:;
- (id)deviceID;
- (void).cxx_destruct;
+ (void)registerApplogSetupCompletion:;
+ (id)sharedAppLogManager;
@end
