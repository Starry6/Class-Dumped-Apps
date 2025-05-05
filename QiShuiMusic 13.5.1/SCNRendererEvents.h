@interface SCNRendererEvents : NSObject
@property (nonatomic) <MTLEvent> waitEvent;
@property (nonatomic) Q waitFrame;
@property (nonatomic) <MTLEvent> signalEvent;
@property (nonatomic) Q signalFrame;
- (void)dealloc;
- (id)waitEvent;
- (void)waitBeforeSubmittingRender:;
- (void)signalAfterSubmittingRender:;
- (void)setWaitEvent:;
- (unsigned long long)waitFrame;
- (void)setWaitFrame:;
- (id)signalEvent;
- (void)setSignalEvent:;
- (unsigned long long)signalFrame;
- (void)setSignalFrame:;
@end
