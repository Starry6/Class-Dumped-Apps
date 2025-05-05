@interface RxCollectionSectionSolutionBookmark : NSObject
@property (nonatomic) <RxCollectionLayoutSectionSolver> solution;
@property (nonatomic) RxCollectionLayoutSection section;
@property (nonatomic) RxCollectionPreferredSizes preferredSizes;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} globalFrame;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} orthogonalContentLayoutFrame;
@property (nonatomic) {CGSize=dd} orthogonalContentSize;
- (id)copyWithGlobalFrame:;
- (id)globalFrame;
- (id)initWithSolution:globalFrame:contentSize:section:;
- (id)initWithSolution:globalFrame:contentSize:section:preferredSizes:;
- (id)orthogonalContentLayoutFrame;
- (id)orthogonalContentSize;
- (id)preferredSizes;
- (void).cxx_destruct;
- (id)contentSize;
- (id)description;
- (id)section;
- (id)solution;
@end
