@interface AWETokamakMemoryMonitorManager : NSObject
@property (nonatomic) BOOL isActived;
@property (nonatomic) BOOL isEnabled;
- (BOOL)_isUserPathEnabled;
- (BOOL)isActived;
- (void)prepareHeimdallrConfig;
- (id)_aweme_ios_memory_monitor_config_v2;
- (void)_trackerWithType:value:;
- (void)_initializeState;
- (void)_initializeOnlineModeConfig;
- (BOOL)_isEnabledByInhouseConfig;
- (BOOL)willActiveMonitorThisSession;
- (BOOL)_isUploadByUserEnabled;
- (void)setIsActived:;
- (BOOL)canUploadWithRelaunchReason:;
- (BOOL)_canActiveByInhouseConfig;
- (BOOL)_canActiveByOnlineConfig;
- (BOOL)_canUploadByInhouseConfig;
- (BOOL)_canUploadByOnlineConfigWithRelaunchReason:;
- (BOOL)_isOneByOneEnabled;
- (int)_activeLimitCount;
- (id)init;
- (void)_updateState:;
- (void).cxx_destruct;
- (void)startWithCallback:;
- (BOOL)isEnabled;
+ (id)shared;
@end
