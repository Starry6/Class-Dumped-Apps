@interface AWELVideoLibraryFilterTableViewCell : UITableViewCell
@property (nonatomic) UICollectionView container;
@property (nonatomic) AWELVideoLibraryPageContext context;
@property (nonatomic) NSArray categories;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupSubview;
- (void)p_preventFilterDoubleClick;
- (void)setContainer:;
- (id)container;
- (void)setCategories:;
- (id)categories;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)context;
@end
