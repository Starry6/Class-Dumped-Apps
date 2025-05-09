@interface CUWACSession : NSObject
@property (nonatomic) NSDictionary configuration;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) NSString label;
@property (nonatomic) @? progressHandler;
@property (nonatomic) @? promptForSetupCodeHandler;
@property (nonatomic) CUWiFiDevice wacDevice;
- (void)_cleanup;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)init;
- (void)_run;
- (void)dealloc;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)setLabel:;
- (void)setConfiguration:;
- (id)label;
- (id)configuration;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (int)_runFinish;
- (void)_progress:info:;
- (void)trySetupCode:;
- (int)_runSaveOriginalWiFi;
- (int)_runJoinSoftAP;
- (void)_runJoinSoftAPStart;
- (void)_runJoinSoftAPFinished:;
- (int)_runEasyConfigPreConfig;
- (void)_runEasyConfigPreConfigStart;
- (void)_runEasyConfigProgress:info:;
- (int)_runRestoreOriginalWiFi;
- (void)_runRestoreOriginalWiFiStart;
- (void)_runRestoreOriginalWiFiFinished:;
- (int)_runEasyConfigPostConfig;
- (void)_runFinishRestored:;
- (id)promptForSetupCodeHandler;
- (void)setPromptForSetupCodeHandler:;
- (id)wacDevice;
- (void)setWacDevice:;
@end
