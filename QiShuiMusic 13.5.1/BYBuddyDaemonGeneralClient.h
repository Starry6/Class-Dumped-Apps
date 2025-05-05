@interface BYBuddyDaemonGeneralClient : NSObject
- (id)init;
- (BOOL)setupAssistantNeedsToRun;
- (void).cxx_destruct;
- (void)performSilentICDPUpgrade;
- (id)backupMetadata;
- (id)_daemonConnection;
- (void)getInternalSkipInfo:;
- (void)startExpressSettingsUpload;
- (void)ensureSilentLoginUpgrade;
- (void)ensureShortLivedTokenUpgrade;
- (void)observeFinishSetupTriggers;
- (void)deferDataMigratorExit;
- (void)cancelDataMigratorDeferredExit;
- (void)setInternalShouldSkipFlows:skipExceptions:;
- (void)cancelInternalSkipInfo;
- (void)enrollInSeedProgramNamed:withAssetAudience:;
- (void)storeAuthenticationContextforApplyPay:;
- (id)fetchAuthenticationContextForApplePay;
- (void)storeAuthenticationContextforBiometric:;
- (id)fetchAuthenticationContextForBiometric;
+ (id)factory;
@end
