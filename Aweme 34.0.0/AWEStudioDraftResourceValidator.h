@interface AWEStudioDraftResourceValidator : NSObject
+ (void)validateResourcesWithPublishModel:forContext:validationLevel:completion:;
+ (void)collectNLEResourceInDraftFolder:pathSet:publishModel:;
+ (id)nleResourcePathsInModel:draftFolder:;
+ (BOOL)isTargetTrackType:;
+ (BOOL)shouldValidateResourcesWithPublishModel:forContext:;
+ (void)performValidateResourcesWithPublishModel:validationLevel:completion:;
+ (id)allResourcePathsForDraftFolder:publishModel:;
+ (BOOL)validateResourcePaths:publishModel:validationLevel:;
+ (void)trackResourceValidationWithParams:publishModel:;
+ (void)validateVideoAsset:publishModel:validationLevel:completion:;
+ (BOOL)isValidDraft:;
@end
