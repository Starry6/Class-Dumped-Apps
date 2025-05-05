@interface PuzzleEngineKit : NSObject
+ (BOOL)isPostInitializeNotification;
+ (void)registAndBindServices;
+ (void)registerContainerVCRouterInterceptor:;
+ (void)registerLifeCycleInterceptor:;
+ (void)registerWebViewInterceptor:;
+ (void)startTasksForKey:;
+ (void)unregiserLifeCycleInterceptor:;
+ (void)unregiserWebViewInterceptor:;
+ (void)unregisterContainerVCRouterInterceptor:;
+ (BOOL)didSetup;
+ (void)setupWithConfiguration:;
@end
