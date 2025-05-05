@interface RxDiffingStagedChangeset : NSObject
@property (nonatomic) __RxDiffableDataSourceOrderedSetI sectionIdentifiers;
@property (nonatomic) __RxDiffableDataSourceOrderedSetI itemIdentifiers;
@property (nonatomic) NSArray updateItems;
@property (nonatomic) __RxDataSourceSnapshotter snapshotter;
- (id)initWithSectionIdentifiers:itemIdentifiers:updateItems:snapshotter:;
- (id)itemIdentifiers;
- (id)sectionIdentifiers;
- (void).cxx_destruct;
- (id)updateItems;
- (id)snapshotter;
+ (id)changesetsWithBeforeDataSourceInfo:afterDataSourceInfo:;
@end
