@interface PPAdaptiveCoalescerPendingKeyState : NSObject
- (id)init;
- (void)addDate:;
- (BOOL)shouldGarbageCollectForNowDate:;
- (double)currentQPSForNowDate:;
- (double)currentDelayForNowDate:;
- (void).cxx_destruct;
- (id)initWithKey:;
@end
