@interface CSJWCMiniappManager : NSObject
@property (nonatomic) NSString userName;
@property (nonatomic) NSString path;
@property (nonatomic) Q miniProgramType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)copy;
- (id)mutableCopy;
+ (void)handleWCMiniappActionWithModel:context:completionBlock:;
+ (void)pcsj_handleWCMiniappOpenSDKActionWithModel:context:completionBlock:;
+ (BOOL)pcsj_handleWCMiniappSchemeActionWithModel:context:completionBlock:;
+ (void)pcsj_launchMiniappWithInfo:launchInfo:complete:;
+ (void)pcsj_launchMiniappWithLaunchInfo:complete:;
+ (void)pcsj_openSDKRegisterAppWithInfo:complete:;
+ (id)pcsj_urlWithString:;
+ (BOOL)pcsj_validWCMiniappQueriesSchemes;
+ (void)pcsj_wcMiniappBackupActionWithModel:context:success:completionBlock:;
+ (void)pcsj_wcMiniappInitializeStatsTrackerWithMiniappInfo:success:;
+ (id)pcsj_wcMiniappLinkSchemeWithResponse:;
+ (id)pcsj_wcMiniappOpenSDKWithResponse:;
+ (id)pcsj_wcMiniappTypeWithMeta:success:;
+ (BOOL)validWCOpenSDK;
+ (id)allocWithZone:;
+ (id)manager;
@end
