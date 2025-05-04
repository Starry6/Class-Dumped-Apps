@interface AWEDCFeedSwitchPreviewVerticalCell : UICollectionViewCell
@property (nonatomic) q cellType;
- (void)configWithCellType:selected:;
- (long long)cellType;
- (void)setCellType:;
- (void)prepareForReuse;
+ (id)reuseIdentifier;
@end
