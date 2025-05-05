@interface PLCPLFaceRebuildSupport : NSObject
- (void).cxx_destruct;
- (id)initWithAsset:managedObjectContext:;
- (void)rebuildAllFaces;
- (void)rebuildFace:;
- (void)rebuildDetectedFace:;
- (void)rebuildRejectedFace:;
- (void)rebuildHiddenFace:;
- (id)fetchDeferredFacesToRebuild;
- (id)fetchPersonForDeferredFace:;
+ (void)rebuildDeferredFacesForAsset:inManagedObjectContext:;
@end
