@interface VCTextJitterBuffer : NSObject
- (void)dealloc;
- (BOOL)start;
- (void)setDelegate:;
- (void)stop;
- (id)delegate;
- (id)initWithConfiguration:;
- (void)enqueuePacket:;
- (void)heartbeat;
- (BOOL)startHeartbeat;
- (void)stopHeartbeat;
- (id)allocTextPacket;
- (void)releaseTextPacket:;
- (id)allocTextFrame;
- (void)releaseTextFrame:;
- (void)jitterQueuePushPacket:;
@end
