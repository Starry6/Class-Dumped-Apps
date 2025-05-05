@interface ICSearchableItemResult : NSObject
@property (nonatomic) CSSearchableItem searchableItem;
@property (nonatomic) NSArray additionalSearchableItems;
- (id)searchableItem;
- (void).cxx_destruct;
- (void)setSearchableItem:;
- (void)setAdditionalSearchableItems:;
- (id)additionalSearchableItems;
@end
