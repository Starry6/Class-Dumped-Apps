@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject
@property (nonatomic) q channelCount;
- (void)dealloc;
- (double)sampleRate;
- (long long)channelCount;
- (BOOL)isBinaural;
- (BOOL)isDownmix;
- (id)initWithFigAlternateObjC:mediaSelectionOption:;
@end
