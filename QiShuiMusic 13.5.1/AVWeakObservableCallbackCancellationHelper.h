@interface AVWeakObservableCallbackCancellationHelper : NSObject
- (id)init;
- (void)dealloc;
- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:;
@end
