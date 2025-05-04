@interface AWEFeedLiveTabSelectionCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) q style;
@property (nonatomic) BOOL currentSelected;
- (void)configWithCellModel:style:;
- (void)setCurrentSelected:;
- (BOOL)currentSelected;
- (BOOL)pointInside:withEvent:;
- (id)initWithFrame:;
- (long long)style;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setStyle:;
- (void)setupUI;
- (void)updateColor;
+ (id)reuseIdentifier;
@end
