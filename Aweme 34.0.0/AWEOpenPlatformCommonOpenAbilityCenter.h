@interface AWEOpenPlatformCommonOpenAbilityCenter : NSObject
+ (void)showCommonErrorToast;
+ (BOOL)checkScope:inClientScopesArray:;
+ (void)executeClientMethod:withParams:;
+ (void)jumpToProfile:withClientKey:;
+ (void)actionOpenplatformURL:;
@end
