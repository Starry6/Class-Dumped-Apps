@interface AWESecWebMonitor : NSObject
+ (void)triggerMonitorAction:catergory:onContainer:;
+ (void)triggerMonitorAction:catergory:onContainer:withDelay:;
+ (void)triggerMonitorAction:catergory:metric:onContainer:;
+ (void)triggerMonitorAction:catergory:metric:onContainer:withDelay:;
+ (void)_internalTriggerMonitorAction:catergory:metric:onContainer:;
+ (void)onJSBInvoke:;
+ (void)ats_preload;
+ (void)ats_onJSBInvoke:;
+ (void)addCallInfo:;
+ (id)getCallInfos;
+ (void)setup;
@end
