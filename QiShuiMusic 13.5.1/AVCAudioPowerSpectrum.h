@interface AVCAudioPowerSpectrum : NSObject
@property (nonatomic) NSArray channels;
@property (nonatomic) float minFrequency;
@property (nonatomic) float maxFrequency;
@property (nonatomic) q sourceType;
- (id)channels;
- (id)init;
- (void)dealloc;
- (long long)sourceType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (float)minFrequency;
- (float)maxFrequency;
- (void)applyChannelBins:binCount:channelID:;
- (void)checkNumChannels:;
+ (BOOL)supportsSecureCoding;
@end
