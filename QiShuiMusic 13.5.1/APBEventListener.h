@interface APBEventListener : NSObject
@property (nonatomic) <APBEventProtocol> delegate;
- (id)_eventType:withNoti:;
- (long long)eventTriggeredTimes:;
- (void)increaseTriggerCnt:;
- (void)onAbnormalClose:;
- (void)onAlertAppear:;
- (void)onAlertDisappear:;
- (void)onAppEnterForeground:;
- (void)onAppResignActive:;
- (void)onAppResumeActive:;
- (void)onGlobalTimeout:;
- (void)onTaskTimeout:;
- (void)registerAllEvents;
- (void)removeTriggerCnt:;
- (void)unregisterAllEvents;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)registerEvent:;
- (id)delegate;
- (void)unregisterEvent:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
