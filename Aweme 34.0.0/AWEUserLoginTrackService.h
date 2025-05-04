@interface AWEUserLoginTrackService : NSObject
+ (void)trackLoginFailLoginPlatform:additionalParams:error:;
+ (void)trackLoginNotifyLoginPlatform:showPlatforms:additionalParams:;
+ (void)trackLoginProcedureEvent:loginPlatform:additionalParams:;
+ (void)trackLoginEventName:loginPlatform:isPanelShow:additionalParams:;
+ (void)trackSendCodeSendMethod:platform:error:additionalParams:;
+ (void)trackLoginProcedureEvent:loginStyle:showPlatforms:viewModel:error:;
+ (unsigned long long)platformOfLoginStyle:viewModel:;
+ (void)trackLoginEventName:loginStyle:isPanelShow:additionalParams:;
+ (void)trackLoginProcedureEvent:loginPlatform:error:;
+ (id)commonParamsLoginTrackEvent:loginPlatform:showPlatforms:;
+ (id)eventNameDictionary:;
+ (void)trackLoginProcedureEvent:loginPlatform:showPlatforms:additionalParams:error:;
+ (id)commonParamsLoginPlatform:isPanelShow:;
@end
