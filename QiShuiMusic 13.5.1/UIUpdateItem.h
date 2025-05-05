@interface UIUpdateItem : NSObject
@property (nonatomic) UITableViewUpdateGap gap;
@property (nonatomic) UICollectionViewUpdateItem collectionViewUpdateItem;
@property (nonatomic) BOOL isDecomposedFromReload;
- (id)gap;
- (long long)compareIndexPaths:;
- (void)setGap:;
- (void).cxx_destruct;
- (long long)inverseCompareIndexPaths:;
- (id)collectionViewUpdateItem;
- (BOOL)isDecomposedFromReload;
@end
