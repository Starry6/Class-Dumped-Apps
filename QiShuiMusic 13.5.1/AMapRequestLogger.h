@interface AMapRequestLogger : NSObject
- (void)addObserverForOp:withComponent:needReport:;
- (void)doHandleFinalResultOfOp:responseDict:response:responseErr:netErr:withLoggerItem:;
- (void)onBeginOfOp:;
- (void)onEndOfOp:;
- (void)onFinalResultOfOp:responseDict:response:responseErr:netErr:;
- (id)init;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
