@interface VCPFaceCropManager : NSObject
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:andContext:;
- (BOOL)_persistGeneratedFaceCrops:forAsset:error:;
- (id)_faceAssociatedWithFaceCrop:;
- (id)_bestFaceForFaceDetectionRequest:withRect:;
- (id)_faceFromFaceCrop:error:;
- (id)_associateFace:withFaceCrop:error:;
- (BOOL)_clearDirtyStateOnFaceCrop:error:;
- (BOOL)_generateAndAssociateFaceprintedFaceForFaceCrop:faceCropFaceLocalIdentifier:error:;
- (BOOL)_updateFaceprint:forFace:error:;
- (BOOL)_updateFace:withFaceCrop:error:;
- (BOOL)_recordNeedToPersonBuildOnFaceGroupContainingFace:error:;
- (BOOL)_processDirtyFaceCrop:faceCropFaceLocalIdentifier:error:;
- (id)_vcpFaceCropFromPHFaceCrop:;
- (BOOL)generateAndPersistFaceCropsForFaces:withAsset:resource:resourceURL:error:;
- (int)processDirtyFaceCrops:withCancelBlock:andExtendTimeoutBlock:;
+ (BOOL)_allowANE;
@end
