@interface AWETuningPerfSessions : NSObject
+ (void)_aweLazyRegisterStaticLoad;
+ (void)perfSessionInit;
+ (void)registerSessions;
+ (void)setupGlobalSessions;
+ (void)setUpEccsSessions:targetVC:;
+ (void)_handleSceneDidChange;
+ (void)_applicationDidBecomeActive;
@end
