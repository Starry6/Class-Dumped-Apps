@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer
- (id)init;
- (void).cxx_destruct;
- (int)finalizeAnalysis;
- (id)privateResults;
- (int)processMetadataGroup:flags:;
- (id)initWithRequestAnalyses:formatDescription:;
- (BOOL)gyroHomographyVersionIsValid:;
- (id)readGyroHomographyDimension:;
- (id)readSoftwareStackVersion:;
- (id)getSetupDataFrom:;
- (id)getFirstAtomWithFourCharCode:fromSetupData:;
- (float)compareSoftwareStackVersion:withReferenceVersion:;
- (float)compareNumericVersion:withReferenceVersion:;
- (int)convertLivePhotoStruct:toDictionary:;
- (int)convertLivePhotoBinary:toDictionary:;
+ (id)defaultDesiredKeys;
+ (id)referenceSoftwareStackVersion;
@end
