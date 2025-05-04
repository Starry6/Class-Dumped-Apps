@interface AWEOfficialSubCategoryDetailListCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
- (void)renderModel:context:;
- (void)updateUIIfSelected:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setupLayout;
+ (id)identifier;
@end
