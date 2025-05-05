@interface VEAudioEffectPreprocessor : NSObject
+ (id)compositionFromAsset:timeRange:;
+ (id)getParameterAsChunk:;
+ (id)preProcessAudio:;
+ (void)preprocessAVAssets:effectPath:inRangeMap:completion:;
+ (void)process:inChannel:inSamplesPerChannel:;
+ (void)processSampleBuff:;
+ (id)preprocessor;
+ (id)processQueue;
@end
