@interface IESLiveSaaSFeedTabCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL currentSelected;
- (BOOL)currentSelected;
- (void)setCurrentSelected:;
- (void)setTitleLabel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
