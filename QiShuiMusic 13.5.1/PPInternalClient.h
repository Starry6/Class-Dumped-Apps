@interface PPInternalClient : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (BOOL)trialOverridePath:namespaceName:factorName:error:;
- (BOOL)setTrialUseDefaultFiles:error:;
- (id)sysdiagnoseInformationWithError:;
+ (id)sharedInstance;
@end
