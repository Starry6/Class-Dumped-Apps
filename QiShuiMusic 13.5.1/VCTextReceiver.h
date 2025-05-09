@interface VCTextReceiver : NSObject
@property (nonatomic) <VCTextReceiverDelegate> delegate;
@property (nonatomic) NSArray supportedPayloads;
@property (nonatomic) double lastReceivedRTPPacketTime;
@property (nonatomic) double lastReceivedRTCPPacketTime;
- (void)dealloc;
- (BOOL)start;
- (void)setDelegate:;
- (BOOL)stop;
- (id)delegate;
- (id)initWithConfiguration:;
- (void)setSupportedPayloads:;
- (id)supportedPayloads;
- (double)lastReceivedRTPPacketTime;
- (double)lastReceivedRTCPPacketTime;
- (void)didDetectMissingFrame;
- (void)didReceiveFrame:;
- (void)initializeTextPacket:withMediaPacket:;
- (int)retrieveRTPPacket:;
- (void)receiverThreadCallback:;
- (void)processRTPPacket;
- (void)processRTCPPacket;
- (BOOL)isSupportedPayload:;
- (void)validateAndEnqueuePackets:;
- (void)splitPacket:packetArray:;
- (id)allocFrameWithPacket:data:dataLength:timestamp:;
- (BOOL)parsePacket:;
- (BOOL)enqueuePacket:;
- (void)setLastReceivedRTPPacketTime:;
- (void)setLastReceivedRTCPPacketTime:;
@end
