@interface VCAudioTier : NSObject
@property (nonatomic) I networkBitrate;
@property (nonatomic) I audioCodecBitrate;
@property (nonatomic) I packetsPerBundle;
@property (nonatomic) I redNumPayloads;
@property (nonatomic) I redMaxDelay20ms;
@property (nonatomic) VCAudioPayloadConfig payloadConfig;
- (id)dictionary;
- (BOOL)isEqualTo:;
- (id)description;
- (unsigned int)packetsPerBundle;
- (id)initWithNetworkBitrate:bundlingAppliedByCodec:audioCodecBitrate:packetsPerBundle:redNumPayloads:payloadConfig:;
- (unsigned int)networkBitrate;
- (unsigned int)audioCodecBitrate;
- (unsigned int)redNumPayloads;
- (unsigned int)redMaxDelay20ms;
- (id)payloadConfig;
+ (id)newAudioTierForPayloadConfig:bundlingAppliedByCodec:audioCodecBitrate:packetsPerBundle:redNumPayloads:headerSize:;
+ (BOOL)bundlingAppliedByCodecForPayload:mode:;
@end
