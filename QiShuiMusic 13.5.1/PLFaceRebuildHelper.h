@interface PLFaceRebuildHelper : NSObject
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)rebuildDetectedFace:onAsset:person:;
- (void)rebuildRejectedFace:onAsset:person:;
- (void)rebuildHiddenFace:onAsset:;
- (id)findOrInsertDetectedFaceForRebuildFace:onAsset:;
- (void)_insertDetectionTraitsForRebuildTrait:onDetection:;
- (id)insertDetectedFaceForRebuildFace:onAsset:;
- (id)findExistingDetectedFaceForRebuildFace:onAsset:;
@end
