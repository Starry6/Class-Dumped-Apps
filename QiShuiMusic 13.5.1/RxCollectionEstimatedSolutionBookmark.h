@interface RxCollectionEstimatedSolutionBookmark : NSObject
@property (nonatomic) RxCollectionLayoutItemSolver solution;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} solutionFrame;
@property (nonatomic) {_NSRange=QQ} itemRange;
@property (nonatomic) <RxCollectionLayoutAuxillaryOffsets> supplementaryOffsets;
- (id)_supplementaryOffsetsForItemRange:solution:supplementaryOffsets:;
- (id)solutionFrame;
- (id)supplementaryOffsets;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSolution:frame:itemIndexOffset:supplementaryOffsets:maxItemFrameCount:;
- (id)solution;
- (id)itemRange;
@end
