@interface SiriTTSNeuralUtils : NSObject
+ (BOOL)hasANE;
+ (BOOL)hasAMX;
+ (BOOL)isH12Platform;
+ (BOOL)isANEOnly;
+ (BOOL)isNeuralPlatform;
+ (BOOL)shouldUseNeuralVoice:;
+ (BOOL)isANEModelCompiled:;
+ (BOOL)compileANEModel:error:;
@end
