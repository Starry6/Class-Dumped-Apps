@interface AVAssetVariant : NSObject
@property (nonatomic) double peakBitRate;
@property (nonatomic) double averageBitRate;
@property (nonatomic) AVAssetVariantVideoAttributes videoAttributes;
@property (nonatomic) AVAssetVariantAudioAttributes audioAttributes;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithFigAlternate:;
- (id)videoAttributes;
- (id)audioAttributes;
- (double)peakBitRate;
- (double)averageBitRate;
- (id)_figAlternate;
+ (BOOL)supportsSecureCoding;
@end
