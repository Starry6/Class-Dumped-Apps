@interface VEAudioParams : NSObject
@property (nonatomic) NSInteger sample_rate;
@property (nonatomic) NSInteger channels;
@property (nonatomic) q channel_layout;
@property (nonatomic) NSInteger format;
@property (nonatomic) NSInteger nb_samples;
- (long long)channel_layout;
- (int)nb_samples;
- (void)setChannel_layout:;
- (void)setNb_samples:;
- (void)setFormat:;
- (int)channels;
- (id)init;
- (int)format;
- (void)setChannels:;
- (id)copyWithZone:;
- (int)sample_rate;
- (void)setSample_rate:;
@end
