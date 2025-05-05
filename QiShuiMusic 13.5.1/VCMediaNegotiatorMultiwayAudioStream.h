@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream
@property (nonatomic) NSSet supportedAudioPayloads;
- (id)init;
- (void)dealloc;
- (void)addPayload:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)supportedAudioPayloads;
- (void)setSupportedAudioPayloads:;
@end
