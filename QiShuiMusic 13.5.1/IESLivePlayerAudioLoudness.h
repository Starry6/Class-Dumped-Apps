@interface IESLivePlayerAudioLoudness : NSObject
@property (nonatomic) float sourceLuft;
@property (nonatomic) float sourcePeak;
@property (nonatomic) float targetLufs;
@property (nonatomic) BOOL isEnableExternalAETargetLufs;
- (BOOL)isEnableExternalAETargetLufs;
- (void)setIsEnableExternalAETargetLufs:;
- (void)setSourceLuft:;
- (void)setSourcePeak:;
- (void)setTargetLufs:;
- (float)sourceLuft;
- (float)sourcePeak;
- (float)targetLufs;
@end
