@interface UICollectionViewDiffableDataSourceSectionSnapshotHandlers : NSObject
@property (nonatomic) @? shouldExpandItemHandler;
@property (nonatomic) @? willExpandItemHandler;
@property (nonatomic) @? shouldCollapseItemHandler;
@property (nonatomic) @? willCollapseItemHandler;
@property (nonatomic) @? snapshotForExpandingParentItemHandler;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithShouldExpandItemHandler:willExpandItemHandler:shouldCollapseItemHandler:willCollapseItemHandler:snapshotForExpandingParentItemHandler:;
- (id)shouldExpandItemHandler;
- (void)setShouldExpandItemHandler:;
- (id)willExpandItemHandler;
- (void)setWillExpandItemHandler:;
- (id)shouldCollapseItemHandler;
- (void)setShouldCollapseItemHandler:;
- (id)willCollapseItemHandler;
- (void)setWillCollapseItemHandler:;
- (id)snapshotForExpandingParentItemHandler;
- (void)setSnapshotForExpandingParentItemHandler:;
@end
