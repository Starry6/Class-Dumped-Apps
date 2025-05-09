@interface VCMediaNegotiationBlobV2StreamGroupStream : PBCodable
@property (nonatomic) BOOL hasMetadata;
@property (nonatomic) I metadata;
@property (nonatomic) BOOL hasPayloadSpecOrPayloads;
@property (nonatomic) I payloadSpecOrPayloads;
@property (nonatomic) BOOL hasQualityIndex;
@property (nonatomic) I qualityIndex;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) I rtpSSRC;
@property (nonatomic) BOOL hasStreamID;
@property (nonatomic) I streamID;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) I maxNetworkBitrate;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) I repairedMaxNetworkBitrate;
@property (nonatomic) BOOL hasAudioChannelCount;
@property (nonatomic) I audioChannelCount;
@property (nonatomic) BOOL hasStreamIndex;
@property (nonatomic) I streamIndex;
@property (nonatomic) BOOL hasRequiredPackedPayload;
@property (nonatomic) NSData requiredPackedPayload;
@property (nonatomic) BOOL hasOptionalPackedPayload;
@property (nonatomic) NSData optionalPackedPayload;
@property (nonatomic) BOOL hasCoordinateSystem;
@property (nonatomic) I coordinateSystem;
- (unsigned int)coordinateSystem;
- (void)dealloc;
- (unsigned int)metadata;
- (void)writeTo:;
- (void)setCoordinateSystem:;
- (unsigned long long)hash;
- (void)setMetadata:;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (BOOL)hasMetadata;
- (unsigned int)streamID;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAudioChannelCount:;
- (unsigned int)audioChannelCount;
- (void)setStreamID:;
- (void)setHasMetadata:;
- (void)setMaxNetworkBitrate:;
- (void)setHasMaxNetworkBitrate:;
- (BOOL)hasMaxNetworkBitrate;
- (void)setRepairedMaxNetworkBitrate:;
- (void)setHasRepairedMaxNetworkBitrate:;
- (BOOL)hasRepairedMaxNetworkBitrate;
- (unsigned int)maxNetworkBitrate;
- (unsigned int)qualityIndex;
- (void)setQualityIndex:;
- (unsigned int)repairedMaxNetworkBitrate;
- (unsigned int)rtpSSRC;
- (void)setRtpSSRC:;
- (unsigned int)streamIndex;
- (void)setStreamIndex:;
- (id)initWithStreamConfig:payloadConfigs:streamGroupID:defaultConfig:;
- (id)initWithStreamConfig:payloadConfigs:streamGroupID:;
- (BOOL)initSSRC:;
- (id)streamConfigWithPayloadConfigs:payloadConfigSampleRates:streamGroupID:;
- (void)usePayloadSpecWithGroupID:qualityIndexForPayloadSpecIndex:defaultPayloadSpecsForQualityIndex:;
- (BOOL)usesPayloadConfigsWithGroupID:;
- (unsigned int)actualStreamIndex;
- (unsigned int)actualMaxNetworkBitrateWithDefaultConfig:;
- (unsigned int)actualMaxRepairedNetworkBitrateWithDefaultConfig:;
- (unsigned int)actualAudioChannelCountWithDefaultConfig:;
- (unsigned int)actualMetadataWithDefaultConfig:;
- (unsigned int)actualQualityIndexWithDefaultConfig:;
- (BOOL)updatePayloadSpecsForConfig:defaultConfig:;
- (BOOL)updatePayloadSpecsForConfig:defaultConfig:payloadConfigs:;
- (id)dataRequiredPacketPayload;
- (BOOL)readRequiredPacketPayloadWithStreamConfig:;
- (id)optionalPackedPayloaWithDefaultConfig:;
- (BOOL)readOptionalPacketPayload:;
- (id)requiredPayloadCompressWithConfig:;
- (id)optionalPayloadCompressWithConfig:;
- (id)compressWithConfig:;
- (unsigned int)mediaStreamGroupCoordinateSystem;
- (BOOL)setNegotiatedCoordinateSystemFromCoordinateSystem:;
- (void)setHasRtpSSRC:;
- (BOOL)hasRtpSSRC;
- (BOOL)hasQualityIndex;
- (void)setPayloadSpecOrPayloads:;
- (void)setHasPayloadSpecOrPayloads:;
- (BOOL)hasPayloadSpecOrPayloads;
- (void)setHasQualityIndex:;
- (void)setHasStreamID:;
- (BOOL)hasStreamID;
- (void)setHasAudioChannelCount:;
- (BOOL)hasAudioChannelCount;
- (void)setHasStreamIndex:;
- (BOOL)hasStreamIndex;
- (BOOL)hasRequiredPackedPayload;
- (BOOL)hasOptionalPackedPayload;
- (void)setHasCoordinateSystem:;
- (BOOL)hasCoordinateSystem;
- (unsigned int)payloadSpecOrPayloads;
- (id)requiredPackedPayload;
- (void)setRequiredPackedPayload:;
- (id)optionalPackedPayload;
- (void)setOptionalPackedPayload:;
+ (void)printWithLogFile:prefix:streamConfig:;
+ (BOOL)isDefaultPayloadConfigsWithStreamConfig:payloadConfigs:streamGroupID:;
+ (BOOL)streamIndex:forStreamGroupID:qualityIndex:isFallbackStream:;
+ (BOOL)qualityIndex:isFallbackStream:forStreamGroupID:streamIndex:;
+ (id)defaultsForStreamGroupID:streamIndex:;
+ (BOOL)isFallbackStreamWithStreamGroupID:streamConfig:;
+ (unsigned int)metadataWithStreamConfig:;
+ (void)updateStreamConfig:withMetadata:;
+ (unsigned int)payloadFlagWithPayload:;
+ (BOOL)payloadsWithStreamConfig:payloadBitmap:;
+ (BOOL)payloadSpecWithStreamConfig:payloadConfigs:payloadSpecs:;
+ (int)payloadsWithPayloadBit:;
+ (void)appendMetadata:toString:;
+ (void)appendPayloadsToString:streamConfig:;
+ (void)appendPayloadsSpecsToString:streamConfig:;
@end
