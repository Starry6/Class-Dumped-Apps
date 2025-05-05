@interface RTCLooperThread : NSThread
@property (nonatomic) RTCLooper owner;
@property (nonatomic) @? stopCompletelyblock;
@property (nonatomic) BOOL myStopPending;
- (void)stopAsync:;
- (BOOL)isCurrentThread;
- (id)stopCompletelyblock;
- (void)setStopCompletelyblock:;
- (BOOL)myStopPending;
- (void)setMyStopPending:;
- (void)setOwner:;
- (id)owner;
- (void)main;
- (id)initWithOwner:;
- (void).cxx_destruct;
@end
