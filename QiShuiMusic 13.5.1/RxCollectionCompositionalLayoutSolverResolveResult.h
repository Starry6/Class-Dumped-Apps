@interface RxCollectionCompositionalLayoutSolverResolveResult : NSObject
@property (nonatomic) {CGPoint=dd} contentOffsetAdjustment;
@property (nonatomic) {CGSize=dd} contentSizeAdjustment;
@property (nonatomic) BOOL sectionsWereRequeried;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setContentOffsetAdjustment:;
- (void)setSectionsWereRequeried:;
- (void).cxx_destruct;
- (void)addDeletedAuxillaryOfElementKind:atIndexPath:isSupplementary:;
- (void)addInsertedAuxillaryOfElementKind:atIndexPath:isSupplementary:;
- (id)indexPathsForDeletedSupplememtariesForElementKind:;
- (id)indexPathsForDeletedDecorationsForElementKind:;
- (id)indexPathsForInsertedSupplememtariesForElementKind:;
- (id)indexPathsForInsertedDecorationsForElementKind:;
- (id)contentOffsetAdjustment;
- (BOOL)sectionsWereRequeried;
- (id)contentSizeAdjustment;
- (void)setContentSizeAdjustment:;
@end
