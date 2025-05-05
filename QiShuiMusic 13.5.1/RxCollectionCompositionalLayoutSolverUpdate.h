@interface RxCollectionCompositionalLayoutSolverUpdate : NSObject
@property (nonatomic) NSArray updateItems;
@property (nonatomic) <RxCollectionViewUpdateTranslating> updateTranslator;
@property (nonatomic) __RxDataSourceSnapshotter finalDataSourceSnapshot;
- (id)finalDataSourceSnapshot;
- (id)initWithUpdateItems:updateTranslator:finalDataSourceSnapshot:;
- (id)updateTranslator;
- (void).cxx_destruct;
- (id)description;
- (id)updateItems;
+ (id)solverUpdateWithUpdateItems:updateTranslator:finalDataSourceSnapshot:;
@end
