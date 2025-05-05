@interface MLLoader : NSObject
+ (id)loadModelFromAssetAtURL:configuration:error:;
+ (id)loadUpdatableModelFromAssetAtURL:configuration:error:;
+ (id)loadModelFromAssetAtURL:configuration:loaderEvent:error:;
+ (BOOL)unarchiveCodedModelFrom:to:error:;
+ (id)loadModelFromArchive:configuration:loaderEvent:useUpdatableModelLoaders:error:;
+ (id)loadUpdatableModelWithClass:fromArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
+ (id)loadModelFromArchive:error:;
+ (id)loadModelFromArchive:configuration:loaderEvent:error:;
+ (BOOL)createDecryptSessionForModelAtURL:configuration:decryptSession:loaderEvent:error:;
+ (id)loadModelFromArchive:configuration:error:;
+ (id)loadModelWithClass:fromArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
+ (void)populateLoaderAndPredictionEvent:model:configuration:loadTimeDuration:;
+ (id)loadUpdatableModelFromArchive:configuration:error:;
+ (BOOL)checkAssetPath:error:;
+ (id)loadModelFromAssetAtURL:error:;
@end
