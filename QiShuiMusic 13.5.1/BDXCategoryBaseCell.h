@interface BDXCategoryBaseCell : UICollectionViewCell
@property (nonatomic) BDXCategoryBaseCellModel cellModel;
@property (nonatomic) BDXCategoryViewAnimator animator;
@property (nonatomic) NSMutableArray animationBlockArray;
- (BOOL)checkCanStartSelectedAnimation:;
- (void)startSelectedAnimationIfNeeded:;
- (void)addSelectedAnimationBlock:;
- (id)animationBlockArray;
- (void)setAnimationBlockArray:;
- (void)setCellModel:;
- (id)animator;
- (void)dealloc;
- (void)setAnimator:;
- (void)prepareForReuse;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reloadData:;
- (void)initializeViews;
- (id)cellModel;
@end
