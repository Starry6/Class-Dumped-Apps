@interface AVDataAsset : AVAsset
- (id)tracks;
- (void)dealloc;
- (id)_formatReader;
- (Class)_classForTrackInspectors;
- (id)initWithData:contentType:;
- (id)initWithData:contentType:options:;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (unsigned long long)referenceRestrictions;
- (BOOL)_requiresInProcessOperation;
+ (unsigned long long)_dataLengthLimit;
+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:figAssetCreationFlags:;
@end
