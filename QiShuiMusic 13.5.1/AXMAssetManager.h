@interface AXMAssetManager : NSObject
- (id)_photoCaptionAssetsDirectory;
- (id)_uncompiledModelsDirectoryForType:;
- (id)_compiledModelsDirectoryForType:;
- (id)_modelsDirectoryForType:compiled:;
- (id)compiledModelAssetURLsOfType:sources:;
- (id)uncompiledModelAssetURLsOfType:sources:;
- (id)_modelAssetURLsOfType:sources:compiled:;
- (id)_modelAssetNamesOfType:sources:compiled:;
- (id)compiledModelAssetNamesOfType:sources:;
- (id)uncompiledModelAssetNamesOfType:sources:;
- (id)compiledModelAssetURLForModelNamed:ofType:sources:;
- (id)uncompiledModelAssetURLForModelNamed:ofType:sources:;
- (id)_modelAssetURLForModelNamed:ofType:sources:compiled:;
- (id)modelWithName:ofType:sources:compileIfNeeded:persistCompiledModel:error:;
+ (id)defaultManager;
@end
