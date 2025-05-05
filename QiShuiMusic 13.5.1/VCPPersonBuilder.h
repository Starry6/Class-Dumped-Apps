@interface VCPPersonBuilder : NSObject
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:andFaceClusterer:andContext:;
- (void)_readFaceAnalysisState;
- (void)_setFaceAnalysisStateValue:forKey:;
- (void)setPersonBuilderMergeCandidatesEnabled:;
- (void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:;
- (BOOL)_setAllFaceGroupsNeedPersonBuilding;
- (BOOL)performPersonBuildingWithCancelOrExtendTimeoutBlock:error:;
@end
