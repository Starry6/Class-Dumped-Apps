@interface AWEDetailTrendTitleCell : UICollectionViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel userCountLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView hotIconImageView;
@property (nonatomic) AWEDetailTrendTitleTagView tagView;
@property (nonatomic) UIStackView subTitleContainer;
- (id)userCountLabel;
- (void)setUserCountLabel:;
- (id)hotIconImageView;
- (id)subTitleContainer;
- (void)setHotIconImageView:;
- (void)setSubTitleContainer:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (id)tagView;
- (void)setTagView:;
@end
