@interface RxCollectionLayoutItemSolverState : NSObject
@property (nonatomic) NSArray auxillaryFrames;
@property (nonatomic) NSArray itemFrames;
@property (nonatomic) q itemFrameCount;
@property (nonatomic) NSArray solutionFrames;
@property (nonatomic) q supplementaryFrameCount;
@property (nonatomic) <RxCollectionLayoutAuxillaryOffsets> supplementaryFrameOffsets;
@property (nonatomic) NSDictionary supplementaryDictByKindIndex;
@property (nonatomic) NSArray availableLayoutSpaces;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} solvedFittingFrame;
@property (nonatomic) RxRTree geometricIndexer;
- (id)auxillaryFrames;
- (void)__generateGeometricIndexer;
- (void)__generateMemoizedSolutionFramesBasedData;
- (id)availableLayoutSpaces;
- (id)geometricIndexer;
- (id)initWithSolutionFrames:itemFrameCount:supplementaryFrameCount:availableLayoutSpaces:solvedFittingFrame:;
- (long long)itemFrameCount;
- (id)itemFrames;
- (id)solutionFrames;
- (id)solvedFittingFrame;
- (id)supplementaryDictByKindIndex;
- (long long)supplementaryFrameCount;
- (id)supplementaryFrameOffsets;
- (void).cxx_destruct;
@end
