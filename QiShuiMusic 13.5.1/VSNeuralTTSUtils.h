@interface VSNeuralTTSUtils : NSObject
+ (BOOL)hasANE;
+ (BOOL)hasAMX;
+ (BOOL)shouldUseNeuralVoice:;
+ (BOOL)isANEModelCompiled:;
+ (BOOL)isNeuralVoiceReady:;
+ (BOOL)hasCompactNeuralFallback:;
+ (BOOL)isNeuralFallbackCondition;
+ (BOOL)hasOTAANEModel:;
+ (void)compileANEModel:;
+ (BOOL)isNeuralTTSPlatform;
+ (BOOL)isANECompilationPlatform;
@end
