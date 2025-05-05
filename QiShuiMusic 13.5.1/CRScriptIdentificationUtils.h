@interface CRScriptIdentificationUtils : NSObject
+ (id)createMaps:channels:;
+ (id)createMapsFromMLMultiArray:size:channels:;
+ (id)getBufferData:;
+ (long long)computeAssignedIndex:scriptRatioThresholds:;
+ (void)assignScriptCategory:probability:assignedIndex:scriptCount:;
+ (void)checkUseSequenceScriptLocale:probability:assignedIndex:size:;
+ (void)computeSingleTextFeatureScriptCategory:scriptMap:scriptRatioThresholds:;
+ (void)computeTextFeatureScriptCategory:scriptMap:scriptMapFullTile:withScaleIds:scriptRatioThresholds:;
@end
