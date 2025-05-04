@interface AWEKaraokeEffectEditViewModel : NSObject
@property (nonatomic) BOOL useRecommendVolume;
@property (nonatomic) double vocalVolume;
@property (nonatomic) double bgmVolume;
@property (nonatomic) double vocalAlign;
@property (nonatomic) NSString selectedEffectID;
- (void)setBgmVolume:;
- (double)bgmVolume;
- (id)selectedEffectID;
- (void)setSelectedEffectID:;
- (void)setUseRecommendVolume:;
- (void)setVocalVolume:;
- (void)setVocalAlign:;
- (double)vocalVolume;
- (double)vocalAlign;
- (BOOL)useRecommendVolume;
- (void).cxx_destruct;
@end
