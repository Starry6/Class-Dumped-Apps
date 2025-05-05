@interface FigCaptureSessionObservatory : NSObject
- (id)init;
- (void)dealloc;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (void)captureSessionWasCreated:;
+ (id)sharedObservatory;
@end
