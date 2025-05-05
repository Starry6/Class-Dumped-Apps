@interface VCTextTransmitter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)start;
- (void)stop;
- (id)initWithConfiguration:;
- (void)sendCharacter:;
- (void)sendText:;
- (unsigned int)getCharTimestampForSystemTime:;
- (void)sendTextFrameWithRedundancy:marker:;
- (void)updatePayloadHistory:timestamp:payloadType:payload:payloadLength:;
- (void)heartbeat;
- (BOOL)startHeartbeat;
- (void)stopHeartbeat;
@end
