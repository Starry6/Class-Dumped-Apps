@interface AVCaptureBlockKVOObserver : NSObject
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithObjectToObserve:keyPath:options:handler:;
@end
