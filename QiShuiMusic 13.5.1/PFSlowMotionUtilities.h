@interface PFSlowMotionUtilities : NSObject
+ (id)sharedConfiguration;
+ (id)timeRangeMapperForSourceDuration:slowMotionRate:slowMotionTimeRange:forExport:;
+ (int)preferredTimeScale;
+ (id)slowMotionSourceAssetPropertyKeys;
+ (id)assetFromVideoAsset:slowMotionRate:slowMotionTimeRange:forExport:outAudioMix:outTimeRangeMapper:;
+ (BOOL)_isValidSlowMotionRate:;
+ (BOOL)_isValidSlowMotionTimeRange:;
+ (id)_scaledCompositionForAsset:slowMotionRate:slowMotionTimeRange:forExport:outTimeRangeMapper:;
+ (id)_slowMotionRegionsFromSlowMotionTimeRange:;
+ (BOOL)_scaleComposition:baseDuration:slowMotionRate:slowMotionRegions:forExport:outTimeRangeMapper:;
+ (double)_scaleWithinComposition:fromCursor:timeStep:rate:timeRangeMapper:;
+ (void)configureExportSession:forcePreciseConversion:;
+ (id)exportPresetForAsset:preferredPreset:;
+ (id)_setVolume:forSlowMotionRegionsInTrack:timeRangeMapper:;
+ (id)_timeRangeFromTime:toTime:;
+ (id)audioMixForScaledComposition:timeRangeMapper:;
+ (id)adjustTimeRange:forNewStartTime:endTime:;
@end
