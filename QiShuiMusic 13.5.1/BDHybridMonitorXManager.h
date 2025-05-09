@interface BDHybridMonitorXManager : NSObject
@property (nonatomic) BDHybridMonitorXUserInfo userInfo;
@property (nonatomic) BDHMXSettingsManager settingManager;
@property (nonatomic) IESLiveDefaultSettingModel iesLiveDefaultSetting;
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
@property (nonatomic) BDHMXRemoteSetting hybridSetting;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL disableSDKNetwork;
@property (nonatomic) NSObject<OS_dispatch_semaphore> settingsSemaphore;
- (BOOL)disableSDKNetwork;
- (void)dispatchAsyncHandlerInOperationQueue:;
- (id)hybridSetting;
- (id)iesLiveDefaultSetting;
- (void)loadMonitorModuleWithSetting:;
- (void)setDisableSDKNetwork:;
- (void)setHybridSetting:;
- (void)setIesLiveDefaultSetting:;
- (id)settingsSemaphore;
- (void)setupMonitorSetting;
- (void)startMonitorWithUserInfo:;
- (void)updateMonitorSetting:;
- (BOOL)isInitialized;
- (id)init;
- (void)dealloc;
- (id)userInfo;
- (id)operationQueue;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (void)setOperationQueue:;
- (id)settingManager;
- (void)setSettingManager:;
- (void)setIsInitialized:;
+ (id)bdWebViewInternalClassName;
+ (id)shared;
@end
