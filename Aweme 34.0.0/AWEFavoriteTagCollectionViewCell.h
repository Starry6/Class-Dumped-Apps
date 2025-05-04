@interface AWEFavoriteTagCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UIView constraintView;
- (void)p_setupUI;
- (void)configWithModel:;
- (id)constraintView;
- (void)setConstraintView:;
- (id)textLabel;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
+ (double)caculateCellWidth:;
+ (unsigned long long)caculateNumberOfCellsPerRow:;
+ (id)indentifier;
+ (id)tagCellSizeWithTagNumbers:;
@end
