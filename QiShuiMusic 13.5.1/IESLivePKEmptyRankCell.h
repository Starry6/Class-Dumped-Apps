@interface IESLivePKEmptyRankCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView bgImageView;
- (void)layoutUI:;
- (void)updateWithRecommend:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (void)setBgImageView:;
- (id)bgImageView;
@end
