@interface RxCollectionLayoutEnvironment : NSObject
@property (nonatomic) <RxCollectionLayoutContainer> container;
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) __RxDataSourceSnapshotter _dataSourceSnapshot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTraitCollection:;
- (void)setContainer:;
- (id)container;
- (id)initWithContainer:traitCollection:dataSourceSnapshot:;
- (id)traitCollection;
- (void)set_dataSourceSnapshot:;
- (id)_dataSourceSnapshot;
- (void).cxx_destruct;
@end
