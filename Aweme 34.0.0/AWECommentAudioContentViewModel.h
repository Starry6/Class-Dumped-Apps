@interface AWECommentAudioContentViewModel : NSObject
+ (id)averageWaveArrWithWave:;
+ (id)audioWaveHeightArrWithAverageWaveArr:duration:;
+ (id)audioWavePathSizeWithAverageWaveArr:duration:;
+ (id)audioWavePathWithWaveHeightArr:;
+ (long long)p_audioPowerCountWithPowerArr:duration:;
+ (id)__forgeAudioPowersFromRealPowers:;
+ (id)__calculateMaximalValueFromArray:threshold:;
@end
