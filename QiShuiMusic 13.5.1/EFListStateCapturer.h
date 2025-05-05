@interface EFListStateCapturer : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> stateCaptureQueue;
@property (nonatomic) <EFCancelable> stateCaptureCancelable;
- (void)dealloc;
- (void).cxx_destruct;
- (id)stateCaptureCancelable;
- (id)initWithTitle:itemName:headLimit:tailLimit:delegate:;
- (id)stateCaptureQueue;
@end
