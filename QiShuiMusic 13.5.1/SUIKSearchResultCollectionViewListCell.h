@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell
@property (nonatomic) CSSearchableItem searchableItem;
- (void)prepareForReuse;
- (id)searchableItem;
- (void).cxx_destruct;
- (void)updateConfigurationUsingState:;
- (void)configureWithSearchableItem:;
- (void)setSearchableItem:;
+ (id)reuseIdentifier;
@end
