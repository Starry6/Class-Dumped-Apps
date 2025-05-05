@interface UICollectionViewUpdateItem : NSObject
@property (nonatomic) NSIndexPath indexPathBeforeUpdate;
@property (nonatomic) NSIndexPath indexPathAfterUpdate;
@property (nonatomic) q updateAction;
- (id)rx_newIndexPath;
- (long long)rx_compareIndexPaths:;
- (id)rx_finalIndexPath;
- (id)rx_indexPath;
- (id)rx_initialIndexPath;
- (long long)rx_inverseCompareIndexPaths:;
- (BOOL)rx_isSectionOperation;
- (long long)compareIndexPaths:;
- (id)indexPathBeforeUpdate;
- (long long)updateAction;
- (void).cxx_destruct;
- (id)indexPathAfterUpdate;
- (long long)inverseCompareIndexPaths:;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
