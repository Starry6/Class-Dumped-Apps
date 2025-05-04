@interface AWEDitoPOIFavoriteLabelsCollectionCell : UICollectionViewCell
@property (nonatomic) AWEDitoPOIFavoriteLabelsItemModel model;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView imageView;
- (void)configWithModel:;
- (void)changeStatusWithSelected:;
- (id)textLabel;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setTextLabel:;
- (void)setupUI;
+ (id)labelFont;
@end
