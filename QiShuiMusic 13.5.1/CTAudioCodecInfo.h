@interface CTAudioCodecInfo : NSObject
@property (nonatomic) Q callId;
@property (nonatomic) q codec;
@property (nonatomic) Q amrMode;
@property (nonatomic) q evsBandwidth;
@property (nonatomic) q evsBitrate;
- (id)init;
- (id)initWithCoder:;
- (long long)codec;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithCallId:codec:amrMode:evsBandwidth:evsBitrate:;
- (unsigned long long)callId;
- (void)setCallId:;
- (void)setCodec:;
- (unsigned long long)amrMode;
- (void)setAmrMode:;
- (long long)evsBandwidth;
- (void)setEvsBandwidth:;
- (long long)evsBitrate;
- (void)setEvsBitrate:;
+ (BOOL)supportsSecureCoding;
@end
