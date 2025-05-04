@interface AWEDoubleColumnDislikeSectionHeader : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) q currentBigMode;
- (void)setCurrentBigMode:;
- (long long)currentBigMode;
- (void)setUIToBigFont:;
- (id)init;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)refreshUI;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)updateTitle:;
+ (id)reuseIdentifier;
@end
