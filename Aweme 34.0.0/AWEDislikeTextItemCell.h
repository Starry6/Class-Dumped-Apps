@interface AWEDislikeTextItemCell : UICollectionViewCell
@property (nonatomic) UILabel title;
@property (nonatomic) UILabel subTitle;
- (void)p_setupUI;
- (void)deselectedStyle;
- (void)updateWithTitle:subTitle:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)layoutSubviews;
- (void)setTitle:;
- (void)setSelected:;
- (void)selectedStyle;
@end
