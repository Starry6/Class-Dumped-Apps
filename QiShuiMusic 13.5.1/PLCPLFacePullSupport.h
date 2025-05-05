@interface PLCPLFacePullSupport : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSyncContext:asset:;
- (void)applyFacesChangesFromAssetChange:;
- (long long)_policyForApplyingFaceChangesFromAssetChange:;
- (id)_applyAssetChange:toExistingFaces:withPolicy:;
- (id)_createFaceFromFaceRef:algorithmVersion:;
- (void)_finalizeFace:withFaceRef:applyDimensionAndState:;
- (void)_applyDimensionAndStateFromFaceReference:toDetectedFace:;
- (void)_unlinkPersonIfVerifiedFromFace:;
- (BOOL)_canReassignFaceFromPerson:toPerson:shouldDedupePersons:;
- (void)_applyPersonFromFaceReference:toDetectedFace:;
+ (void)applyFacesChangesFromAssetChange:toAsset:inSyncContext:;
+ (id)_disjointSetsByAddingSet:toSets:;
@end
