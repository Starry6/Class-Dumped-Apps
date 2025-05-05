@interface VCPFaceMerger : NSObject
- (id)mergeExistingFaces:andDetectedFaces:withRequestHandler:orientedWidth:orientedHeight:assetWidth:assetHeight:;
- (id)_faceObservationsWithBoundingBoxFromFaces:withFaceHashMapping:;
- (void)_alignBoundingBoxOfFaces:withRequestHandler:orientedWidth:orientedHeight:;
- (id)_alignFaceObservations:withRequestHandler:error:;
- (id)initWithThreshold:;
- (id)_sortedViableFaceMergePairsFromQueryFaces:andCandidateFaces:;
+ (BOOL)_allowANE;
@end
