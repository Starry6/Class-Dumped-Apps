@interface AVCaptureDeviceControlRequestQueue : NSObject
- (id)head;
- (id)init;
- (void)dealloc;
- (id)dequeue;
- (void)enqueueRequest:;
@end
