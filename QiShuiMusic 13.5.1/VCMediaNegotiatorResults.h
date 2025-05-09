@interface VCMediaNegotiatorResults : NSObject
@property (nonatomic) BOOL supportsDynamicMaxBitrate;
@property (nonatomic) NSString remoteUserAgent;
@property (nonatomic) NSString remoteBasebandCodec;
@property (nonatomic) I remoteBasebandCodecSampleRate;
@property (nonatomic) NSSet bandwidthConfigurations;
@property (nonatomic) C mediaControlInfoVersion;
@property (nonatomic) I remoteBlobVersion;
@property (nonatomic) NSInteger controlChannelVersion;
@property (nonatomic) (tagNTP=Q{?=II}) remoteBlobCreationTime;
- (id)init;
- (void)dealloc;
- (id)bandwidthConfigurations;
- (unsigned char)mediaControlInfoVersion;
- (void)setMediaControlInfoVersion:;
- (void)addBandwidthConfigurations:;
- (unsigned int)maxBandwidthWithOperatingMode:connectionType:;
- (BOOL)supportsDynamicMaxBitrate;
- (void)setSupportsDynamicMaxBitrate:;
- (id)remoteUserAgent;
- (void)setRemoteUserAgent:;
- (id)remoteBasebandCodec;
- (void)setRemoteBasebandCodec:;
- (unsigned int)remoteBasebandCodecSampleRate;
- (void)setRemoteBasebandCodecSampleRate:;
- (unsigned int)remoteBlobVersion;
- (void)setRemoteBlobVersion:;
- (id)remoteBlobCreationTime;
- (void)setRemoteBlobCreationTime:;
- (int)controlChannelVersion;
- (void)setControlChannelVersion:;
@end
