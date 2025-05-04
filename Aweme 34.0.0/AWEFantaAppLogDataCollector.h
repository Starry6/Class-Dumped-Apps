@interface AWEFantaAppLogDataCollector : AWEFantaAbstractDataCollector
- (void)onEvent:params:;
- (void)onDataCollectorInit;
- (id)type;
+ (id)sharedInstance;
@end
