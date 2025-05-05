@interface PPAdaptiveCoalescer : NSObject
- (id)init;
- (void)coalesceRequestKey:handler:executeRequestAndInvokeHandlersBlock:nowDate:;
- (void)coalesceRequestKey:handler:executeRequestAndInvokeHandlersBlock:;
- (void)garbageCollectPendingKeysForNowDate:;
- (void).cxx_destruct;
@end
