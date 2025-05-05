@interface PLDeferredPhotoFinalizer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)processor:didFinishProcessingPhotoProxy:finalPhoto:error:;
- (void)_writeDebugFileFromProxyMetadata:forAsset:isWide:;
- (void)cancelFinalizationForTaskIdentifier:;
- (void)requestFinalizationOfAsset:forWide:isBackgroundPriority:reason:completionHandler:;
- (void)requestCancellationOfAsset:;
- (void)_callCompletionHandlersWithPhotoProxy:processor:success:error:;
- (int)deleteIntermediatesExcludingDeferredIdentifiers:;
- (void)performSemanticEnhanceForAsset:isBackgroundPriority:reason:completionHandler:;
- (id)_createAssetAdjustmentsForAsset:error:;
- (id)_imageConversionOptionsForAsset:adjustments:isBackgroundPriority:reason:;
- (void)_setupMediaConversionSourceCollections:destinationCollection:forAsset:;
- (void)_prepareFinalizedAssetForSemanticDevelopment:finalizedPhotoData:;
- (id)requestFrameDropRecoveryForAsset:completionHandler:;
- (void)_promoteProxyAndRecoverErrors:libraryServicesManager:inError:completionHandler:;
- (void)_copyFrameRecoveredVideoComplementToFinalSlot:libraryServicesManager:resultURL:completionHandler:;
- (void)_repushOriginalVideoComplementIfNeeded:;
- (long long)_requestFrameDropRecoveryForAssetURL:withOptions:progressHandler:andCompletionHandler:;
- (void)_copyOriginalVideoComplementToDiagnosticPath:;
- (void)cancelOutstandingFrameDropRecoveryRequests;
+ (BOOL)errorIsRecoverable:;
@end
