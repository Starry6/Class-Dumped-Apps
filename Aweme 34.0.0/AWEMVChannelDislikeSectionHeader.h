@interface AWEMVChannelDislikeSectionHeader : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)updateTitle:;
+ (id)reuseIdentifier;
@end
