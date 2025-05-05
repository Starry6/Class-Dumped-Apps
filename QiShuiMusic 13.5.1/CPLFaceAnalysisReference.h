@interface CPLFaceAnalysisReference : CPLFaceAnalysis
@property (nonatomic) NSArray faces;
- (id)faces;
- (void)addFace:;
- (void)addFaces:;
- (void)setFaces:;
@end
