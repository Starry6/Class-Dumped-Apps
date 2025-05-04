@interface AWEMVPadSkeletonSmallCardSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) q minimumLineSpacing;
@property (nonatomic) q minimumInteritemSpacing;
@property (nonatomic) {UIEdgeInsets=dddd} inset;
- (id)inset;
- (long long)minimumInteritemSpacing;
- (long long)minimumLineSpacing;
- (void)setInset:;
- (void)setMinimumInteritemSpacing:;
- (void)setMinimumLineSpacing:;
@end
