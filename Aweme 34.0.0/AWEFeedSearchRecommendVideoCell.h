@interface AWEFeedSearchRecommendVideoCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString title;
@property (nonatomic) UIColor titleColor;
- (void)updateTitleLayoutWithInset:multiLines:;
- (id)titleColor;
- (void)setTitleColor:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
@end
