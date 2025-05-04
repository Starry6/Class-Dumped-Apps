@interface AWETeenHotSpotCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel pageviewLabel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) UIView emptyTitleLabel;
@property (nonatomic) UIView emptyPageviewLabel;
- (id)emptyTitleLabel;
- (void)setEmptyTitleLabel:;
- (void)configWithHotSpotModel:;
- (id)pageviewLabel;
- (id)emptyPageviewLabel;
- (void)setPageviewLabel:;
- (void)setEmptyPageviewLabel:;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:;
- (id)coverView;
- (void)setCoverView:;
@end
