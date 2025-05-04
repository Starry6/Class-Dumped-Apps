@interface AWEPlayVideoAudioMetricsHelper : NSObject
+ (id)audioMetricsConfig;
+ (void)loadEffectModelWithModelNames:requirements:completion:;
+ (id)effectModelPathWithModelNames:requirements:;
+ (BOOL)enableAudioMetrics;
+ (long long)audioMetricsDetectSamplingRate;
+ (long long)audioMetricsDetectMinDuration;
+ (id)audioMetricsDetectThresholdParams;
+ (id)audioMetricsAlgorithmConfig;
+ (id)audioMetricsBitMask;
@end
