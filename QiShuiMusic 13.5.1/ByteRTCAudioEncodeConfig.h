@interface ByteRTCAudioEncodeConfig : NSObject
@property (nonatomic) q codecType;
@property (nonatomic) q encMode;
@property (nonatomic) q channelNum;
@property (nonatomic) q encBitrate;
@property (nonatomic) q useDtx;
@property (nonatomic) q useInbandfec;
@property (nonatomic) q sampleRate;
@property (nonatomic) q packetSize;
- (long long)encMode;
- (void)setEncMode:;
- (long long)encBitrate;
- (void)setEncBitrate:;
- (long long)useDtx;
- (void)setUseDtx:;
- (long long)useInbandfec;
- (void)setUseInbandfec:;
- (long long)packetSize;
- (void)setPacketSize:;
- (id)init;
- (long long)sampleRate;
- (void)setSampleRate:;
- (long long)codecType;
- (void)setCodecType:;
- (void)setChannelNum:;
- (long long)channelNum;
@end
