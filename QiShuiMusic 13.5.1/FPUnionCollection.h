@interface FPUnionCollection : FPItemCollection
@property (nonatomic) NSArray collections;
- (void)setCollections:;
- (id)collections;
- (void).cxx_destruct;
- (id)description;
- (id)createDataSourceWithSortDescriptors:;
- (id)initWithCollections:;
@end
