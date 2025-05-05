@interface PLMediaAnalysisServiceRequestAdapter : NSObject
+ (void)cancelRequest:;
+ (long long)invalidRequestID;
+ (unsigned long long)faceAnalysisTaskID;
+ (long long)requestSuggestedMePersonIdentifierWithContext:photoLibraryURL:progressHandler:completionHandler:;
+ (long long)requestSceneProcessingForAssets:withOptions:progressHandler:andCompletionHandler:;
+ (long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:photoLibraryURL:progessHandler:completionHandler:;
+ (long long)requestSuggestedPersonsForPersonWithLocalIdentifier:toBeConfirmedPersonSuggestions:toBeRejectedPersonSuggestions:photoLibraryURL:progessHandler:completionHandler:;
+ (long long)requestVIPModelFilepathForPhotoLibraryURL:forModelType:andCompletionHandler:;
+ (int)queryProgressDetail:forPhotoLibraryURL:andTaskID:;
+ (long long)requestResetFaceClusteringStateWithPhotoLibraryURL:progressHandler:completionHandler:;
+ (long long)requestPersonPromoterStatusWithAdvancedFlag:photoLibraryURL:progressHandler:completionHandler:;
+ (long long)requestPetsAnalysisForAssets:withOptions:progressHandler:completionHandler:;
+ (long long)requestRebuildPersonsWithLocalIdentifiers:photoLibraryURL:progressHandler:completionHandler:;
+ (long long)requestQuickFaceIdentificationForPhotoLibraryURL:withOptions:andCompletionHandler:;
+ (long long)requestClusterCacheValidationWithPhotoLibraryURL:progressHandler:completionHandler:;
+ (long long)requestReclusterFacesWithPhotoLibraryURL:progressHandler:completionHandler:;
+ (long long)requestProcessingTypes:forAssetsWithLocalIdentifiers:fromPhotoLibraryWithURL:progressHandler:completionHandler:;
+ (long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:forceUpdate:photoLibraryURL:progessHandler:completionHandler:;
+ (unsigned long long)petVIPModelType;
+ (long long)requestResetFaceClassificationModelForPhotoLibraryURL:progressHandler:completionHandler:;
@end
