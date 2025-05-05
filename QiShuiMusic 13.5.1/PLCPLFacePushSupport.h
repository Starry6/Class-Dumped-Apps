@interface PLCPLFacePushSupport : NSObject
- (id)cplFaceRefsFromFaces:algorithmVersion:;
- (id)initWithSyncContext:;
- (void)applyFaceChangesFromAsset:toAssetChange:;
- (BOOL)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:;
- (id)cplFaceAnalysisRefFromAsset:algorithmVersion:;
- (void).cxx_destruct;
- (id)cplFaceRefFromFace:;
- (id)rejectedPersonIdentifiersForFace:;
- (id)_facesAdjustmentsFingerprintFromAsset:assetChange:;
+ (void)markSyncableFacesAsPushedInAsset:;
+ (BOOL)isFaceSyncable:;
+ (void)applyFaceChangesFromAsset:toAssetChange:inPhotoLibrary:;
+ (BOOL)_shouldPushBeingKeyFace:;
@end
