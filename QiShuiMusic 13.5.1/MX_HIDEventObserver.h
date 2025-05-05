@interface MX_HIDEventObserver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) BOOL smartCoverClosed;
- (void)setAccessQueue:;
- (void)handleEvent:;
- (id)accessQueue;
- (id)init;
- (void)dealloc;
- (void)handleButtonEvent:;
- (void)setSmartCoverClosed:;
- (BOOL)smartCoverClosed;
@end
