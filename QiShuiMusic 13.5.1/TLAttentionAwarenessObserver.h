@interface TLAttentionAwarenessObserver : NSObject
- (id)init;
- (void)dealloc;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)pollForAttentionWithEventHandler:;
- (void)cancelPollForAttentionWithToken:;
- (void)_beginPollingForAttention;
- (void)_endPollingForAttention;
- (void)_didReceiveAttentionPollingEventOfType:attentionEvent:;
- (void)_didCompleteInitialization;
- (void)_invokePollingForAttentionEventHandlers:eventType:;
+ (id)sharedAttentionAwarenessObserver;
+ (BOOL)supportsAttenuatingTonesForAttentionDetected;
@end
