@interface AWEECOMIMPopMenuCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView icon;
- (void)reloadCellWithModel:;
- (id)icon;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
+ (id)itemSize;
@end
