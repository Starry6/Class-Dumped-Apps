@interface VCTransportStreamGFT : NSObject
@property (nonatomic) ^{tagVCMediaQueue=} mediaQueue;
- (void)dealloc;
- (id)mediaQueue;
- (int)receivePacket:;
- (void)setMediaQueue:;
- (id)initWithTransportSessionID:options:;
- (int)VCTransportStreamSendPacket:;
- (void)VCTransportStreamUnblock;
- (int)registerPacketCallbackContext:callback:;
- (int)unregisterPacketCallback;
- (void)processVTPPacket:;
@end
