@interface CULiveAudioServerSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)activateAndReturnError:;
- (void)handleDataEvent:;
@end
