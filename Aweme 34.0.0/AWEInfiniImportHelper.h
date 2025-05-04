@interface AWEInfiniImportHelper : NSObject
+ (unsigned long long)slidesImportTypeWithAssets:;
+ (BOOL)useSinglePhotoEditor:publishModel:albumInputData:;
+ (long long)infiniEditorVideoTypeWithPublishModel:withAssets:;
+ (BOOL)supportMultiPicturesWithAssets:;
+ (BOOL)supportSlidesImportWithAssets:publishModel:vcType:;
+ (BOOL)supportSingleVideoImportInfiniWithAssets:publishModel:albumInputData:;
+ (BOOL)enableDegradeInfini:;
+ (BOOL)canRecoverFromDraft:;
+ (BOOL)supportSlidesImport;
+ (BOOL)supportSlidesWithPublishModel:;
+ (BOOL)supportEditSlidesImportWithAssets:appendAPhoto:appendALivePhoto:appendAVideo:;
+ (BOOL)useSingleVideoEditor:publishModel:albumInputData:;
+ (BOOL)supportRecoverFromDraftVideoType:;
+ (BOOL)supportSlidesImportWithImportType:;
+ (BOOL)supportEditSlidesImportWithImportType:;
@end
