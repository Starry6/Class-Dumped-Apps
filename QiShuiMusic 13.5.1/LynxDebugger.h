@interface LynxDebugger : NSObject
+ (void)addOpenCardCallback:;
+ (Class)bridgeClass;
+ (BOOL)enable:withOptions:;
+ (BOOL)hasSetOpenCardCallback;
+ (void)onPerfMetricsEvent:withData:instanceId:;
+ (void)onTracingComplete:;
+ (BOOL)openDebugSettingPanel;
+ (void)setOpenCardCallback:;
@end
