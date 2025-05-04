@interface AWEIMMultiSelectListPopupViewModel : NSObject
@property (nonatomic) <AWEIMMultiSelectPopupProtocol> model;
@property (nonatomic) AWEIMMultiSelectListPopupViewUIConfig uiConfig;
@property (nonatomic) RxCollectionViewDiffableDataSource diffableDataSource;
- (id)uiConfig;
- (void)setUiConfig:;
- (id)initWithModel:uiConfig:;
- (void)applySnapshotWithAnimatingDifferences:;
- (double)maxExposedCellCount;
- (id)itemsWithIndexPaths:;
- (void)setModel:;
- (id)diffableDataSource;
- (unsigned long long)numberOfItems;
- (void)setDiffableDataSource:;
- (id)model;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)itemTitles;
@end
